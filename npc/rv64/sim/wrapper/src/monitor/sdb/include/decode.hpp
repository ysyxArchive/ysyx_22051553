#ifndef __CPU_DECODE_H__
#define __CPU_DECODE_H__
#include <stdint.h>
#include <assert.h>
#include "macros.hpp"
#include <stdio.h>

void decode_operand(uint32_t inst, char* name, int *rd, int *rs1, char* inst_name) {  //为src1、src2、rd、imm等赋值
  uint32_t i = inst;
  *rs1 = BITS(i, 19, 15);
  *rd     = BITS(i, 11, 7);
  strcpy(inst_name, name);
}

#define INSTPAT_INST(inst) (inst)          
#define INSTPAT_MATCH(inst, name) { \
  decode_operand(inst, name, &rd , &rs1 , inst_name); \
}

// --- pattern matching mechanism ---
/*
  str：pattern字符串
  len：pattern字符串长度-1,即不包括'\0'的长度
  __key：最终形成不包含空格的指令值，                从字符串转成值 可以视为01字串
    pattern(n)为1 -> __key(n)为1
    pattern(n)为0 -> __key(n)为0
    pattern(n)为？ -> __key(n)为0
  __mask：最终形成掩码值，                  最终也是值 可以视为01字串
    pattern(n)为1 -> __key(n)为1
    pattern(n)为0 -> __key(n)为1
    pattern(n)为？ -> __key(n)为0
  __shift：统计opcode后是否还有？，？有几个
*/

__attribute__((always_inline))
static inline void pattern_decode(const char *str, int len,            
    uint64_t *key, uint64_t *mask, uint64_t *shift) {
  uint64_t __key = 0, __mask = 0, __shift = 0;
#define macro(i) \
  if ((i) >= len) goto finish; \
  else { \
    char c = str[i]; \
    if (c != ' ') { \
      assert(c == '0' || c == '1' || c == '?'); \
      __key  = (__key  << 1) | (c == '1' ? 1 : 0); \
      __mask = (__mask << 1) | (c == '?' ? 0 : 1); \
      __shift = (c == '?' ? __shift + 1 : 0); \
    } \
  }

#define macro2(i)  macro(i);   macro((i) + 1)
#define macro4(i)  macro2(i);  macro2((i) + 2)
#define macro8(i)  macro4(i);  macro4((i) + 4)
#define macro16(i) macro8(i);  macro8((i) + 8)
#define macro32(i) macro16(i); macro16((i) + 16)
#define macro64(i) macro32(i); macro32((i) + 32)
  macro64(0);                                      //会被扩展成 macro(0); macro(1); macro(2); ... macro(63); 
#undef macro
finish:
  *key = __key >> __shift;
  *mask = __mask >> __shift;
  *shift = __shift;
}

__attribute__((always_inline))
static inline void pattern_decode_hex(const char *str, int len,
    uint64_t *key, uint64_t *mask, uint64_t *shift) {
  uint64_t __key = 0, __mask = 0, __shift = 0;
#define macro(i) \
  if ((i) >= len) goto finish; \
  else { \
    char c = str[i]; \
    if (c != ' ') { \
      assert((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || c == '?');\
      __key  = (__key  << 4) | (c == '?' ? 0 : (c >= '0' && c <= '9') ? c - '0' : c - 'a' + 10); \
      __mask = (__mask << 4) | (c == '?' ? 0 : 0xf); \
      __shift = (c == '?' ? __shift + 4 : 0); \
    } \
  }
  macro16(0);
#undef macro
finish:
  *key = __key >> __shift;
  *mask = __mask >> __shift;
  *shift = __shift;
}



// --- pattern matching wrappers for decode ---
#define INSTPAT(pattern, ...) do { \
  uint64_t key, mask, shift; \
  pattern_decode(pattern, STRLEN(pattern), &key, &mask, &shift); \
  if ((((uint64_t)INSTPAT_INST(inst) >> shift) & mask) == key) { \
    INSTPAT_MATCH(inst, ##__VA_ARGS__); \
    goto *(__instpat_end); \
  } \
} while (0)

//对INSTPAT中的字符串进行拆解
//对比s的inst是否与INSTPAT中的字符串匹配
//执行该指令
//不再继续匹配

#define INSTPAT_START(name) { const void * __instpat_end = &&concat(__instpat_end_, name);
#define INSTPAT_END(name)   concat(__instpat_end_, name): ; }

#endif
