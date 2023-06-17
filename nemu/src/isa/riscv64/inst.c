/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include "local-include/reg.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>

#define R(i) gpr(i)
#define Mr vaddr_read
#define Mw vaddr_write

enum {
  TYPE_I, TYPE_U, TYPE_S, TYPE_J, TYPE_R, 
  TYPE_N, // none
};

#define src1R() do { *src1 = R(rs1); } while (0)                      //将寄存器1的值赋给变量
#define src2R() do { *src2 = R(rs2); } while (0)
#define immI() do { *imm = SEXT(BITS(i, 31, 20), 12); } while(0)
#define immU() do { *imm = SEXT(BITS(i, 31, 12), 20) << 12; } while(0)
#define immS() do { *imm = (SEXT(BITS(i, 31, 25), 7) << 5) | BITS(i, 11, 7); } while(0)
/*
#define immS() do { 
  
*imm = 

(

  ({ 
    
  struct { int64_t n : 7; } __x = 
  { .n = (((i) >> (25)) & ((1ull << (31 - 25 + 1)) - 1)); 
  
  (uint64_t)__x.n; 
  
  })        //{}中包含一个复合语句块，返回最后一行
  
  
  << 5

) 

| (((i) >> (7)) & ((1ull << (11 - 7 + 1)) - 1)); 

} while(0)

*/

#define immJ() do \
{ *imm = (SEXT(BITS(i, 31, 31), 1) << 20) | BITS(i, 19, 12) << 12 | BITS(i, 20, 20) << 11 | BITS(i, 30, 21) << 1; } \
while(0)

static void decode_operand(Decode *s, int *rd, word_t *src1, word_t *src2, word_t *imm, int type) {  //为src1、src2、rd、imm等赋值
  uint32_t i = s->isa.inst.val;
  int rs1 = BITS(i, 19, 15);
  int rs2 = BITS(i, 24, 20);
  *rd     = BITS(i, 11, 7);
  switch (type) {
    case TYPE_I: src1R();          immI(); break;       //获取寄存器1的值，获取扩展的imm值
    case TYPE_U:                   immU(); break;
    case TYPE_S: src1R(); src2R(); immS(); break;
    case TYPE_J: src1R();          immJ(); break;
    case TYPE_R: src1R(); src2R();         break;
  }
}

static int decode_exec(Decode *s) {
  int rd = 0;
  word_t src1 = 0, src2 = 0, imm = 0;
  s->dnpc = s->snpc;

#define INSTPAT_INST(s) ((s)->isa.inst.val)                                   
#define INSTPAT_MATCH(s, name, type, ... /* execute body */ ) { \
  decode_operand(s, &rd, &src1, &src2, &imm, concat(TYPE_, type)); \
  __VA_ARGS__ ; \
}
//取inst
//
//获取源操作数、目的寄存器
//留下例如R(rd) = s->pc + imm)，执行指令操作




  //s->isa.inst.val依次匹配INSTPAT中的字符串，如果匹配成功

  INSTPAT_START();
  INSTPAT("0000000 ????? ????? 000 ????? 01100 11", add  , R, R(rd) = src1 + src2);
  INSTPAT("???????????? ????? 000 ????? 00100 11", addi  , I, R(rd) = src1 + imm);
  INSTPAT("? ?????????? ? ???????? ????? 11011 11", jal  , J, R(rd) = s->pc + 4; s->pc = s->pc + imm);
  INSTPAT("???????????? ????? 000 ????? 11001 11", jalr  , I, R(rd) = s->pc + 4; s->pc = (src1 + imm) & ~1);
  INSTPAT("??????? ????? ????? ??? ????? 00101 11", auipc  , U, R(rd) = s->pc + imm);
  INSTPAT("??????? ????? ????? 011 ????? 00000 11", ld     , I, R(rd) = Mr(src1 + imm, 8));
  INSTPAT("??????? ????? ????? 011 ????? 01000 11", sd     , S, Mw(src1 + imm, 8, src2));

  INSTPAT("0000000 00001 00000 000 00000 11100 11", ebreak , N, NEMUTRAP(s->pc, R(10))); 
  INSTPAT("??????? ????? ????? ??? ????? ????? ??", inv    , N, INV(s->pc));             
  INSTPAT_END();

  R(0) = 0; // reset $zero to 0

  return 0;
}

int isa_exec_once(Decode *s) {
  s->isa.inst.val = inst_fetch(&s->snpc, 4);          //获取指令并更新snpc
  return decode_exec(s);                            //译码并执行指令操作
}
