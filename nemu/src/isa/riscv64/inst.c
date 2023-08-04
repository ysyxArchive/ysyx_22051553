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
#define SR(i) csr(i)
#define Mr vaddr_read
#define Mw vaddr_write


typedef struct{
    char name[100];
    paddr_t addr;
    int len;
}Func;

extern Func elf_func[];
extern int nr_elffunc;

enum {                                        //每种type的立即数位域相同
  TYPE_I, TYPE_U, TYPE_S, TYPE_J, TYPE_R, TYPE_B, TYPE_C,
  TYPE_N, // none
};

#define src1R() do { *src1 = R(*rs1); } while (0)                      //将寄存器1的值赋给变量
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
#define immB() do \
{ *imm = (SEXT(BITS(i, 31, 31), 1) << 12) | BITS(i, 7, 7) << 11 | BITS(i, 30, 25) << 5 | BITS(i, 11, 8) << 1; } \
while(0)
#define immC() do { *imm = BITS(i, 19, 15); } while(0)

static void decode_operand(Decode *s, char* name, int *rd, int *rs1, int *csrn, word_t *src1, word_t *src2, word_t *imm, int* shamt, int type, char* inst_name) {  //为src1、src2、rd、imm等赋值
  uint32_t i = s->isa.inst.val;
  *rs1 = BITS(i, 19, 15);
  int rs2 = BITS(i, 24, 20);
  *rd     = BITS(i, 11, 7);
  *csrn    = BITS(i, 31, 20);
  *shamt  = BITS(i, 25, 20);
  strcpy(inst_name, name);
  switch (type) {
    case TYPE_I: src1R();          immI(); break;       //获取寄存器1的值，获取扩展的imm值
    case TYPE_U:                   immU(); break;
    case TYPE_S: src1R(); src2R(); immS(); break;
    case TYPE_J: src1R();          immJ(); break;
    case TYPE_R: src1R(); src2R();         break;
    case TYPE_B: src1R(); src2R(); immB(); break;
    case TYPE_C: src1R();          immC(); break;
    case TYPE_N:                           break;
  }
}

static int decode_exec(Decode *s) {
  int rs1 = 0;
  int rd = 0;
  int csrn = 0;
  int shamt = 0;
  word_t src1 = 0, src2 = 0, imm = 0;     //无符号
  char inst_name[10];

  #ifdef CONFIG_FTRACE
  static int func_level = 0;
  static int func_name[200] = {};
  #endif

  __uint128_t u264_1 = 18446744073709551615ULL;  //写18446744073709551615声明的是一个int字面量

  s->dnpc = s->snpc;   //默认dnpc会+4

#define INSTPAT_INST(s) ((s)->isa.inst.val)          
#define INSTPAT_MATCH(s, name, type, ... /* execute body */ ) { \
  decode_operand(s, name, &rd,  &rs1, &csrn, &src1, &src2, &imm, &shamt, concat(TYPE_, type), inst_name); \
  __VA_ARGS__ ; \
}
//取inst
//
//获取源操作数、目的寄存器
//留下例如R(rd) = s->pc + imm)，执行指令操作




  //s->isa.inst.val依次匹配INSTPAT中的字符串，如果匹配成功
  //word_t函数读出的是无符号扩展，而lb是符号扩展

  INSTPAT_START();
  INSTPAT("???????????????????? ????? 0010111", "auipc"  , U, R(rd) = s->pc + imm);
  INSTPAT("???????????????????? ????? 0110111", "lui"  , U, R(rd) = imm);
  INSTPAT("? ?????????? ? ???????? ????? 11011 11", "jal"  , J, R(rd) = s->pc + 4; s->dnpc = (sword_t)(s->pc) + (sword_t)imm);
  INSTPAT("???????????? ????? 000 ????? 11001 11", "jalr"  , I, R(rd) = s->pc + 4; s->dnpc = ((sword_t)src1 + (sword_t)imm) & ~1);
  
  INSTPAT("??????? ????? ????? 000 ????? 1100011", "beq"  , B, if(src1 == src2)s->dnpc = (sword_t)(s->pc) + (sword_t)imm);
  INSTPAT("??????? ????? ????? 001 ????? 1100011", "bne"  , B, if(src1 != src2)s->dnpc = (sword_t)(s->pc) + (sword_t)imm);
  INSTPAT("??????? ????? ????? 100 ????? 1100011", "blt"  , B, if((sword_t)src1 < (sword_t)src2)s->dnpc = (sword_t)(s->pc) + (sword_t)imm);
  INSTPAT("??????? ????? ????? 101 ????? 1100011", "bge"  , B, if((sword_t)src1 >= (sword_t)src2)s->dnpc = (sword_t)(s->pc) + (sword_t)imm);
  INSTPAT("??????? ????? ????? 110 ????? 1100011", "bltu"  , B, if(src1 < src2)s->dnpc = (sword_t)(s->pc) + (sword_t)imm);
  INSTPAT("??????? ????? ????? 111 ????? 1100011", "bgeu"  , B, if(src1 >= src2)s->dnpc = (sword_t)(s->pc) + (sword_t)imm);

  INSTPAT("???????????? ????? 000 ????? 0000011", "lb"  , I,  R(rd) = SEXT(Mr(src1 + imm, 1), 8));       
  INSTPAT("???????????? ????? 001 ????? 0000011", "lh"  , I,  R(rd) = SEXT(Mr(src1 + imm, 2), 16));
  INSTPAT("???????????? ????? 010 ????? 0000011", "lw"  , I,  R(rd) = SEXT(Mr(src1 + imm, 4), 32));
  INSTPAT("???????????? ????? 100 ????? 0000011", "lbu"  , I, R(rd) = Mr(src1 + imm, 1));   
  INSTPAT("???????????? ????? 101 ????? 0000011", "lhu"  , I, R(rd) = Mr(src1 + imm, 2));
  INSTPAT("???????????? ????? 110 ????? 0000011", "lwu"  , I, R(rd) = Mr(src1 + imm, 4));
  INSTPAT("??????? ????? ????? 011 ????? 00000 11", "ld" , I, R(rd) = Mr(src1 + imm, 8));

  INSTPAT("??????? ????? ????? 000 ????? 0100011", "sb" , S, Mw(src1 + imm, 1, src2));             //需要存储的数据是不做符号扩展的,看指令描述
  INSTPAT("??????? ????? ????? 001 ????? 0100011", "sh" , S, Mw(src1 + imm, 2, src2));
  INSTPAT("??????? ????? ????? 010 ????? 0100011", "sw" , S, Mw(src1 + imm, 4, src2));
  INSTPAT("??????? ????? ????? 011 ????? 0100011", "sd" , S, Mw(src1 + imm, 8, src2));

  INSTPAT("???????????? ????? 000 ????? 0010011", "addi"  , I, R(rd) = (sword_t)src1 + (sword_t)imm);
  INSTPAT("???????????? ????? 010 ????? 0010011", "slti"  , I, R(rd) = ((sword_t)src1 < (sword_t)imm) ? 1 : 0);
  INSTPAT("???????????? ????? 011 ????? 0010011", "sltiu"  , I, R(rd) = (src1 < imm) ? 1 : 0);
  INSTPAT("???????????? ????? 100 ????? 0010011", "xori"  , I, R(rd) = src1 ^ imm);
  INSTPAT("???????????? ????? 110 ????? 0010011", "ori"  , I, R(rd) = src1 | imm);
  INSTPAT("???????????? ????? 111 ????? 0010011", "andi"  , I, R(rd) = src1 & imm);

  INSTPAT("000000 ?????? ????? 001 ????? 0010011", "slli"  , I, R(rd) = src1 << shamt);
  INSTPAT("000000 ?????? ????? 101 ????? 0010011", "srli"  , I, R(rd) = src1 >> shamt);
  INSTPAT("010000 ?????? ????? 101 ????? 0010011", "srai"  , I, R(rd) = (sword_t)src1 >> shamt);  //有符号数右移是算术

  INSTPAT("0000000 ????? ????? 000 ????? 0110011", "add"  , R, R(rd) = (sword_t)src1 + (sword_t)src2);
  INSTPAT("0100000 ????? ????? 000 ????? 0110011", "sub"  , R, R(rd) = (sword_t)src1 - (sword_t)src2);
  INSTPAT("0000000 ????? ????? 001 ????? 0110011", "sll"  , R, R(rd) = src1 << BITS(src2,5,0));
  INSTPAT("0000000 ????? ????? 010 ????? 0110011", "slt"  , R, R(rd) = ((sword_t)src1 < (sword_t)src2) ? 1 : 0);
  INSTPAT("0000000 ????? ????? 011 ????? 0110011", "sltu"  , R, R(rd) = src1 < src2 ? 1 : 0);
  INSTPAT("0000000 ????? ????? 100 ????? 0110011", "xor"  , R, R(rd) = src1 ^ src2);
  INSTPAT("0000000 ????? ????? 101 ????? 0110011", "srl"  , R, R(rd) = src1 >> BITS(src2,5,0));
  INSTPAT("0100000 ????? ????? 101 ????? 0110011", "sra"  , R, R(rd) = (sword_t)src1 >> BITS(src2,5,0));
  INSTPAT("0000000 ????? ????? 110 ????? 0110011", "or"  , R, R(rd) = src1 | src2);
  INSTPAT("0000000 ????? ????? 111 ????? 0110011", "and"  , R, R(rd) = src1 & src2);

  //宏只支持64位
  INSTPAT("0000001 ????? ????? 000 ????? 0110011", "mul" , R, R(rd) = (word_t)((__uint128_t)((__int128_t)src1 * (__int128_t)src2) & u264_1 ));
  INSTPAT("0000001 ????? ????? 001 ????? 0110011", "mulh"  , R, R(rd) = (word_t)((((__uint128_t)((__int128_t)src1 * (__int128_t)src2)) >> 64) & u264_1));
  INSTPAT("0000001 ????? ????? 010 ????? 0110011", "mulhsu"  , R, R(rd) = (word_t)((((__uint128_t)((__int128_t)src1 * (__uint128_t)src2)) >> 64) & u264_1));
  INSTPAT("0000001 ????? ????? 011 ????? 0110011", "mulhu"  , R, R(rd) = (word_t)((((__uint128_t)((__uint128_t)src1 * (__uint128_t)src2)) >> 64) & u264_1));
  INSTPAT("0000001 ????? ????? 100 ????? 0110011", "div"  , R, R(rd) = (sword_t)(sword_t)src1 / (sword_t)src2);
  INSTPAT("0000001 ????? ????? 101 ????? 0110011", "divu"  , R, R(rd) = src1 / src2);
  INSTPAT("0000001 ????? ????? 110 ????? 0110011", "rem"  , R, R(rd) = (sword_t)((sword_t)src1 % (sword_t)src2));
  INSTPAT("0000001 ????? ????? 111 ????? 0110011", "remu"  , R, R(rd) = src1 % src2);



  INSTPAT("???????????? ????? 000 ????? 0011011", "addiw"  , I, R(rd) = SEXT(BITS((sword_t)src1 + (sword_t)imm,31,0), 32));
  INSTPAT("0000000 ????? ????? 001 ????? 0011011", "slliw"  , I, R(rd) = SEXT(BITS(src1 << shamt,31,0), 32));
  INSTPAT("0000000 ????? ????? 101 ????? 0011011", "srliw"  , I, R(rd) = SEXT(((uint32_t)BITS(src1, 31, 0) >> shamt), 32));   //指令描述有误
  INSTPAT("0100000 ????? ????? 101 ????? 0011011", "sraiw"  , I, R(rd) = SEXT(((int32_t)BITS(src1, 31, 0) >> shamt), 32));   

  INSTPAT("0000000 ????? ????? 000 ????? 0111011", "addw"  , R, R(rd) = SEXT(BITS((sword_t)src1 + (sword_t)src2,31,0), 32));
  INSTPAT("0100000 ????? ????? 000 ????? 0111011", "subw"  , R, R(rd) = SEXT(BITS((sword_t)src1 - (sword_t)src2,31,0), 32));
  INSTPAT("0000000 ????? ????? 001 ????? 0111011", "sllw"  , R, R(rd) = SEXT(BITS(src1 << src2,31,0), 32));
  INSTPAT("0000000 ????? ????? 101 ????? 0111011", "srlw"  , R, R(rd) = SEXT(((uint32_t)BITS(src1, 31, 0) >> src2), 32));   //指令描述有误
  INSTPAT("0100000 ????? ????? 101 ????? 0111011", "sraw"  , R, R(rd) = SEXT(((int32_t)BITS(src1, 31, 0) >> src2), 32));   

  INSTPAT("0000001 ????? ????? 000 ????? 0111011", "mulw" , R, R(rd) = SEXT(((__uint128_t)((__int128_t)src1 * (__int128_t)src2) & (__uint128_t)4294967295), 32));   //完成
  INSTPAT("0000001 ????? ????? 100 ????? 0111011", "divw"  , R, R(rd) = SEXT(((int32_t)((int32_t)(BITS(src1, 31, 0)) / (int32_t)(BITS(src2, 31, 0)))), 32));   //完成
  INSTPAT("0000001 ????? ????? 101 ????? 0111011", "divuw"  , R, R(rd) = SEXT(((uint32_t)((uint32_t)(BITS(src1, 31, 0)) / (uint32_t)(BITS(src2, 31, 0)))), 32));
  INSTPAT("0000001 ????? ????? 110 ????? 0111011", "remw"  , R, R(rd) = SEXT(((int32_t)((int32_t)(BITS(src1, 31, 0)) % (int32_t)(BITS(src2, 31, 0)))), 32));
  INSTPAT("0000001 ????? ????? 111 ????? 0111011", "remuw"  , R, R(rd) = SEXT(((uint32_t)((uint32_t)(BITS(src1, 31, 0)) % (uint32_t)(BITS(src2, 31, 0)))), 32));


  INSTPAT("0000000 00001 00000 000 00000 11100 11", "ebreak" , N, NEMUTRAP(s->pc, R(10))); 
  INSTPAT("0000000 00000 00000 000 00000 11100 11", "ecall" , N, s->dnpc = isa_raise_intr(R(17), s->pc + 4)); 
  INSTPAT("0011000 00010 00000 000 00000 1110011", "mret" , N, s->dnpc = SR(MEPC)); 
  
  INSTPAT("????????????? ????? 010 ????? 1110011", "csrrs" , C, R(rd) = SR(csrn); SR(csrn) = SR(csrn) & src1); 
  INSTPAT("????????????? ????? 001 ????? 1110011", "csrrw" , C, R(rd) = SR(csrn); SR(csrn) = src1); 

  INSTPAT("??????? ????? ????? ??? ????? ????? ??", "inv"    , N, INV(s->pc));             

  INSTPAT_END();

  R(0) = 0; // reset $zero to 0


  #ifdef CONFIG_FTRACE
    if(strcmp(inst_name, "jal") == 0 && rd == 1){      //call判定
      for(int i = 0; i < nr_elffunc; i ++){

        if( (s->dnpc) == elf_func[i].addr ){
          printf("0x%08lx: ", s->pc);
          for(int level = func_level; level >= 0; level--){
            printf("  ");
          }
          printf("call [%s@0x%08x]\n", elf_func[i].name, elf_func[i].addr);

          func_name[func_level] = i;
          func_level ++;
        }
      }
      
    }

    if(strcmp(inst_name, "jalr") == 0 && rd == 0 && rs1 == 1){      //ret判定
      for(int i = 0; i < nr_elffunc; i ++){
        if(s->pc <= elf_func[i].addr + elf_func[i].len - 4 && s->pc >= elf_func[i].addr){
          printf("0x%08lx: ", s->pc);

          func_level --;
          for(int level = func_level; level > 0; level--){
            printf("   ");
          }
          printf("ret [%s]\n", elf_func[func_name[func_level]].name);
        }
      }
    }
  #endif

  


  return 0;
}

int isa_exec_once(Decode *s) {
  s->isa.inst.val = inst_fetch(&s->snpc, 4);          //获取指令并更新snpc
  return decode_exec(s);                            //译码并执行指令操作
}
