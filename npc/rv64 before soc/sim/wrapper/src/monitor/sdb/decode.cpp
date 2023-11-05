#include "decode.hpp"

typedef struct{
    char name[100];
    uint64_t addr;
    int len;
}Func;

extern Func elf_func[];
extern int nr_elffunc;

int decode_func(uint32_t inst, uint64_t dnpc, uint64_t pc) {
  // printf("inst is 0x%x, dnpc is 0x%x, pc is 0x%x\n", inst, dnpc, pc);

  int rs1 = 0;
  int rd = 0;
  int csrn = 0;
  char inst_name[10];

  static int func_level = 0;
  static int func_name[500] = {};


  INSTPAT_START();
  INSTPAT("? ?????????? ? ???????? ????? 11011 11", "jal");
  INSTPAT("???????????? ????? 000 ????? 11001 11", "jalr");

  INSTPAT("0000000 00001 00000 000 00000 11100 11", "ebreak"); 
  INSTPAT("0000000 00000 00000 000 00000 11100 11", "ecall"); 
  INSTPAT("0011000 00010 00000 000 00000 1110011", "mret"); 

  INSTPAT_END();

    if(strcmp(inst_name, "jal") == 0 && rd == 1){      //call判定
      
      for(int i = 0; i < nr_elffunc; i ++){

        if( (dnpc) == elf_func[i].addr ){
          printf("0x%08lx: ", pc);
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
        if(pc <= elf_func[i].addr + elf_func[i].len - 4 && pc >= elf_func[i].addr){
          printf("0x%08lx: ", pc);

          func_level --;
          for(int level = func_level; level > 0; level--){
            printf("   ");
          }
          printf("ret [%s]\n", elf_func[func_name[func_level]].name);
        }
      }
    }


  return 0;
}