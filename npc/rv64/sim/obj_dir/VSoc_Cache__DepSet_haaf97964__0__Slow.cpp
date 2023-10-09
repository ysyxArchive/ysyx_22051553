// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSoc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VSoc_Cache.h"

VL_ATTR_COLD void VSoc_Cache___ctor_var_reset(VSoc_Cache* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VSoc_Cache___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_cpu_req_valid = VL_RAND_RESET_I(1);
    vlSelf->io_cpu_req_bits_addr = VL_RAND_RESET_I(32);
    vlSelf->io_cpu_req_bits_data = VL_RAND_RESET_Q(64);
    vlSelf->io_cpu_req_bits_mask = VL_RAND_RESET_I(8);
    vlSelf->io_axi_resp_valid = VL_RAND_RESET_I(1);
    vlSelf->io_axi_resp_bits_data = VL_RAND_RESET_Q(64);
    vlSelf->io_axi_resp_bits_choose = VL_RAND_RESET_I(1);
    vlSelf->io_cpu_resp_valid = VL_RAND_RESET_I(1);
    vlSelf->io_cpu_resp_bits_data = VL_RAND_RESET_Q(64);
    vlSelf->io_axi_req_valid = VL_RAND_RESET_I(1);
    vlSelf->io_axi_req_bits_rw = VL_RAND_RESET_I(1);
    vlSelf->io_axi_req_bits_addr = VL_RAND_RESET_I(32);
    vlSelf->io_axi_req_bits_data = VL_RAND_RESET_Q(64);
    vlSelf->io_fccache_state = VL_RAND_RESET_I(3);
    vlSelf->io_fccache_hit = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_321 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_320 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_319 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_318 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_317 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_316 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_315 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_314 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_311 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_310 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_309 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_308 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_307 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_306 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_305 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_304 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_301 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_300 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_299 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_298 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_297 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_296 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_295 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_294 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_291 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_290 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_289 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_288 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_287 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_286 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_285 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_284 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_281 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_280 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_279 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_278 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_277 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_276 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_275 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_274 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_271 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_270 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_269 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_268 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_267 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_266 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_265 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_264 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_261 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_260 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_259 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_258 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_257 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_256 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_255 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_254 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_251 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_250 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_249 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_248 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_247 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_246 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_245 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_244 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_241 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_240 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_239 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_238 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_237 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_236 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_235 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_234 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_231 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_230 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_229 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_228 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_227 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_226 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_225 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_224 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_221 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_220 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_219 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_218 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_217 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_216 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_215 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_214 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_211 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_210 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_209 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_208 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_207 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_206 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_205 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_204 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_201 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_200 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_199 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_198 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_197 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_196 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_195 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_194 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_191 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_190 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_189 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_188 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_187 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_186 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_185 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_184 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_181 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_180 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_179 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_178 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_177 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_176 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_175 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_174 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_171 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_170 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_169 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_168 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_167 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_166 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_165 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_164 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___TagArray_ext_R0_data = VL_RAND_RESET_I(22);
    vlSelf->__PVT___TagArray_ext_R1_data = VL_RAND_RESET_I(22);
    vlSelf->__PVT__r_count = VL_RAND_RESET_I(4);
    vlSelf->__PVT__w_count = VL_RAND_RESET_I(4);
    vlSelf->__PVT__state = VL_RAND_RESET_I(3);
    vlSelf->__PVT__is_read = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_write = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_340 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_alloc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_alloc_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__addr_reg = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cpu_data = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__cpu_mask = VL_RAND_RESET_I(8);
    vlSelf->__PVT__addr_buf = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rw_buf = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid = VL_RAND_RESET_I(16);
    vlSelf->__PVT__dirty = VL_RAND_RESET_I(16);
    vlSelf->__PVT__replace = VL_RAND_RESET_I(16);
    vlSelf->__PVT__wen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ren = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ren_reg = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(1024, vlSelf->__PVT__rdata0);
    VL_RAND_RESET_W(1024, vlSelf->__PVT__rdata1);
    VL_RAND_RESET_W(1024, vlSelf->__PVT__rdata0_buf);
    VL_RAND_RESET_W(1024, vlSelf->__PVT__rdata1_buf);
    vlSelf->__PVT__refill_buffer_0 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__refill_buffer_1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__refill_buffer_2 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__refill_buffer_3 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__refill_buffer_4 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__refill_buffer_5 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__refill_buffer_6 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__refill_buffer_7 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__refill_buffer_8 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__refill_buffer_9 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__refill_buffer_10 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__refill_buffer_11 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__refill_buffer_12 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__refill_buffer_13 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__refill_buffer_14 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__refill_buffer_15 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___hit0_T_2 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(1024, vlSelf->__PVT__read);
    vlSelf->__PVT___dirty0_T = VL_RAND_RESET_I(16);
    vlSelf->__PVT___dirty1_T = VL_RAND_RESET_I(16);
    vlSelf->__PVT__dirty0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___replace_wire_T = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(1024, vlSelf->__PVT__wdata);
    vlSelf->__PVT___GEN_8 = VL_RAND_RESET_I(16);
    vlSelf->__PVT___GEN_9 = VL_RAND_RESET_I(16);
    vlSelf->__PVT___T_329 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_12 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___T_332 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_337 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_339 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_14 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_48 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_49 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_50 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_51 = VL_RAND_RESET_I(24);
    VL_ZERO_RESET_W(960, vlSelf->__VdfgTmp_h25305f44__0);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__TagArray_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(22);
    }
    vlSelf->__PVT__TagArray_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__TagArray_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__TagArray_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__TagArray_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_0_0_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_0_0_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_0_0_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_0_0_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_0_0_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_0_1_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_0_1_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_0_1_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_0_1_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_0_1_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_0_2_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_0_2_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_0_2_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_0_2_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_0_2_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_0_3_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_0_3_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_0_3_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_0_3_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_0_3_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_0_4_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_0_4_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_0_4_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_0_4_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_0_4_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_0_5_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_0_5_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_0_5_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_0_5_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_0_5_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_0_6_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_0_6_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_0_6_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_0_6_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_0_6_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_0_7_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_0_7_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_0_7_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_0_7_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_0_7_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_1_0_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_1_0_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_1_0_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_1_0_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_1_0_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_1_1_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_1_1_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_1_1_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_1_1_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_1_1_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_1_2_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_1_2_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_1_2_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_1_2_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_1_2_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_1_3_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_1_3_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_1_3_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_1_3_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_1_3_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_1_4_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_1_4_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_1_4_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_1_4_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_1_4_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_1_5_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_1_5_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_1_5_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_1_5_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_1_5_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_1_6_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_1_6_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_1_6_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_1_6_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_1_6_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_1_7_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_1_7_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_1_7_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_1_7_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_1_7_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_2_0_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_2_0_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_2_0_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_2_0_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_2_0_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_2_1_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_2_1_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_2_1_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_2_1_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_2_1_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_2_2_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_2_2_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_2_2_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_2_2_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_2_2_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_2_3_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_2_3_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_2_3_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_2_3_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_2_3_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_2_4_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_2_4_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_2_4_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_2_4_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_2_4_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_2_5_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_2_5_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_2_5_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_2_5_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_2_5_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_2_6_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_2_6_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_2_6_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_2_6_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_2_6_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_2_7_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_2_7_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_2_7_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_2_7_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_2_7_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_3_0_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_3_0_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_3_0_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_3_0_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_3_0_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_3_1_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_3_1_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_3_1_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_3_1_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_3_1_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_3_2_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_3_2_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_3_2_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_3_2_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_3_2_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_3_3_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_3_3_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_3_3_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_3_3_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_3_3_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_3_4_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_3_4_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_3_4_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_3_4_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_3_4_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_3_5_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_3_5_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_3_5_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_3_5_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_3_5_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_3_6_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_3_6_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_3_6_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_3_6_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_3_6_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_3_7_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_3_7_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_3_7_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_3_7_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_3_7_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_4_0_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_4_0_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_4_0_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_4_0_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_4_0_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_4_1_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_4_1_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_4_1_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_4_1_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_4_1_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_4_2_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_4_2_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_4_2_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_4_2_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_4_2_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_4_3_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_4_3_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_4_3_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_4_3_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_4_3_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_4_4_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_4_4_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_4_4_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_4_4_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_4_4_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_4_5_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_4_5_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_4_5_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_4_5_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_4_5_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_4_6_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_4_6_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_4_6_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_4_6_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_4_6_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_4_7_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_4_7_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_4_7_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_4_7_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_4_7_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_5_0_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_5_0_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_5_0_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_5_0_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_5_0_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_5_1_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_5_1_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_5_1_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_5_1_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_5_1_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_5_2_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_5_2_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_5_2_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_5_2_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_5_2_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_5_3_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_5_3_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_5_3_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_5_3_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_5_3_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_5_4_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_5_4_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_5_4_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_5_4_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_5_4_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_5_5_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_5_5_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_5_5_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_5_5_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_5_5_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_5_6_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_5_6_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_5_6_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_5_6_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_5_6_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_5_7_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_5_7_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_5_7_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_5_7_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_5_7_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_6_0_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_6_0_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_6_0_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_6_0_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_6_0_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_6_1_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_6_1_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_6_1_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_6_1_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_6_1_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_6_2_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_6_2_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_6_2_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_6_2_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_6_2_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_6_3_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_6_3_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_6_3_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_6_3_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_6_3_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_6_4_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_6_4_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_6_4_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_6_4_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_6_4_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_6_5_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_6_5_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_6_5_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_6_5_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_6_5_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_6_6_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_6_6_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_6_6_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_6_6_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_6_6_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_6_7_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_6_7_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_6_7_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_6_7_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_6_7_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_7_0_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_7_0_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_7_0_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_7_0_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_7_0_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_7_1_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_7_1_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_7_1_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_7_1_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_7_1_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_7_2_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_7_2_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_7_2_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_7_2_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_7_2_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_7_3_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_7_3_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_7_3_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_7_3_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_7_3_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_7_4_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_7_4_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_7_4_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_7_4_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_7_4_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_7_5_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_7_5_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_7_5_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_7_5_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_7_5_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_7_6_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_7_6_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_7_6_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_7_6_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_7_6_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_7_7_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_7_7_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_7_7_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_7_7_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_7_7_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_8_0_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_8_0_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_8_0_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_8_0_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_8_0_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_8_1_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_8_1_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_8_1_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_8_1_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_8_1_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_8_2_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_8_2_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_8_2_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_8_2_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_8_2_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_8_3_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_8_3_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_8_3_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_8_3_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_8_3_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_8_4_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_8_4_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_8_4_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_8_4_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_8_4_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_8_5_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_8_5_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_8_5_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_8_5_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_8_5_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_8_6_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_8_6_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_8_6_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_8_6_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_8_6_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_8_7_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_8_7_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_8_7_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_8_7_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_8_7_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_9_0_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_9_0_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_9_0_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_9_0_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_9_0_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_9_1_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_9_1_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_9_1_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_9_1_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_9_1_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_9_2_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_9_2_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_9_2_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_9_2_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_9_2_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_9_3_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_9_3_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_9_3_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_9_3_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_9_3_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_9_4_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_9_4_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_9_4_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_9_4_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_9_4_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_9_5_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_9_5_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_9_5_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_9_5_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_9_5_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_9_6_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_9_6_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_9_6_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_9_6_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_9_6_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_9_7_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_9_7_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_9_7_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_9_7_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_9_7_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_10_0_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_10_0_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_10_0_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_10_0_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_10_0_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_10_1_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_10_1_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_10_1_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_10_1_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_10_1_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_10_2_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_10_2_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_10_2_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_10_2_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_10_2_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_10_3_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_10_3_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_10_3_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_10_3_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_10_3_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_10_4_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_10_4_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_10_4_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_10_4_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_10_4_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_10_5_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_10_5_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_10_5_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_10_5_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_10_5_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_10_6_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_10_6_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_10_6_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_10_6_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_10_6_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_10_7_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_10_7_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_10_7_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_10_7_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_10_7_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_11_0_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_11_0_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_11_0_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_11_0_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_11_0_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_11_1_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_11_1_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_11_1_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_11_1_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_11_1_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_11_2_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_11_2_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_11_2_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_11_2_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_11_2_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_11_3_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_11_3_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_11_3_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_11_3_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_11_3_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_11_4_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_11_4_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_11_4_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_11_4_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_11_4_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_11_5_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_11_5_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_11_5_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_11_5_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_11_5_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_11_6_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_11_6_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_11_6_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_11_6_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_11_6_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_11_7_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_11_7_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_11_7_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_11_7_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_11_7_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_12_0_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_12_0_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_12_0_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_12_0_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_12_0_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_12_1_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_12_1_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_12_1_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_12_1_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_12_1_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_12_2_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_12_2_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_12_2_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_12_2_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_12_2_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_12_3_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_12_3_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_12_3_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_12_3_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_12_3_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_12_4_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_12_4_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_12_4_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_12_4_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_12_4_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_12_5_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_12_5_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_12_5_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_12_5_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_12_5_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_12_6_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_12_6_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_12_6_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_12_6_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_12_6_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_12_7_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_12_7_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_12_7_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_12_7_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_12_7_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_13_0_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_13_0_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_13_0_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_13_0_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_13_0_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_13_1_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_13_1_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_13_1_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_13_1_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_13_1_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_13_2_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_13_2_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_13_2_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_13_2_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_13_2_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_13_3_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_13_3_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_13_3_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_13_3_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_13_3_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_13_4_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_13_4_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_13_4_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_13_4_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_13_4_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_13_5_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_13_5_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_13_5_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_13_5_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_13_5_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_13_6_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_13_6_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_13_6_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_13_6_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_13_6_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_13_7_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_13_7_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_13_7_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_13_7_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_13_7_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_14_0_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_14_0_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_14_0_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_14_0_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_14_0_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_14_1_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_14_1_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_14_1_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_14_1_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_14_1_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_14_2_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_14_2_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_14_2_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_14_2_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_14_2_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_14_3_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_14_3_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_14_3_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_14_3_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_14_3_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_14_4_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_14_4_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_14_4_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_14_4_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_14_4_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_14_5_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_14_5_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_14_5_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_14_5_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_14_5_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_14_6_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_14_6_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_14_6_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_14_6_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_14_6_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_14_7_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_14_7_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_14_7_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_14_7_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_14_7_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_15_0_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_15_0_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_15_0_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_15_0_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_15_0_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_15_1_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_15_1_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_15_1_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_15_1_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_15_1_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_15_2_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_15_2_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_15_2_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_15_2_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_15_2_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_15_3_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_15_3_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_15_3_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_15_3_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_15_3_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_15_4_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_15_4_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_15_4_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_15_4_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_15_4_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_15_5_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_15_5_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_15_5_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_15_5_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_15_5_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_15_6_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_15_6_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_15_6_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_15_6_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_15_6_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__DataArray_15_7_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__DataArray_15_7_ext__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_15_7_ext__DOT___GEN_0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__DataArray_15_7_ext__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DataArray_15_7_ext__DOT___GEN_2 = VL_RAND_RESET_I(4);
}
