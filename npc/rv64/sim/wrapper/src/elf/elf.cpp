#include <elf.h>
#include <assert.h>
#include <fstream>
#include <string.h>

typedef struct{
    char name[100];
    uint64_t addr;
    int len;
}Func;

FILE *elf_fp = NULL;
Func elf_func[200] = {};
int nr_elffunc = 0;


void getelf(char* filename){ //解析elf
    
    char shstrtab[512];
    char strtab[4096];
    Elf64_Sym symtab[512];
    
    Elf64_Ehdr ehdr;   //elf头结构
    
    if(filename == NULL)
        return ;

    std::ifstream elf_in;
    elf_in.open(filename, std::ios::binary);

    assert(elf_in.is_open());

    elf_in.read(reinterpret_cast<char *>(&ehdr), sizeof(Elf64_Ehdr));      //elf头
 
    Elf64_Shdr shdr[ehdr.e_shnum];                        //段表
    elf_in.seekg(ehdr.e_shoff, std::ios::beg);
    for(int i = 0; i < ehdr.e_shnum; i++){
        elf_in.read(reinterpret_cast<char *>(&shdr[i]), sizeof(Elf64_Shdr));
    }

    Elf64_Shdr shdr_shstrtab = shdr[ehdr.e_shstrndx];     //段表字符串表
    elf_in.seekg(shdr_shstrtab.sh_offset, std::ios::beg);
    elf_in.read(shstrtab, shdr_shstrtab.sh_size);

    for(int i = 0; i < ehdr.e_shnum; i ++){ //字符串表
        if(strcmp(".strtab", &shstrtab[shdr[i].sh_name]) == 0){
            elf_in.seekg(shdr[i].sh_offset, std::ios::beg);
            elf_in.read(strtab, shdr[i].sh_size);
            break;
        }
    }


    int sym_entnum = 0;

    for(int i = 0; i < ehdr.e_shnum; i ++){ //符号表
        if(strcmp(".symtab", &shstrtab[shdr[i].sh_name]) == 0){
            elf_in.seekg(shdr[i].sh_offset, std::ios::beg);
            // elf_in.read(symtab, shdr[i].sh_size);
            sym_entnum = shdr[i].sh_size/shdr[i].sh_entsize;
            for(int j = 0; j < sym_entnum; j ++){
                elf_in.read(reinterpret_cast<char *>(symtab)+j*shdr[i].sh_entsize, shdr[i].sh_entsize); //read后会自己移动
            }
            break;
        }
    }
    // printf("%d syms are found\n", sym_entnum);
    // for(int i = 0; i < sym_entnum; i ++){
    //     printf("sym[%d] is %s, st_info is %d, st_value is 0x%x, st_size is 0x%x\n", i, &strtab[symtab[i].st_name], 
    //     symtab[i].st_info, symtab[i].st_value, symtab[i].st_size);
    // }
    

    //解析函数项
    for(int i = 0; i < sym_entnum; i ++){
        if((symtab[i].st_info & 0x0f) == STT_FUNC){
            if(symtab[i].st_size != 0){ //例如_start
                strcpy(elf_func[nr_elffunc].name, &strtab[symtab[i].st_name]);
                elf_func[nr_elffunc].addr = symtab[i].st_value;
                elf_func[nr_elffunc].len = symtab[i].st_size;
                nr_elffunc ++;
            }
        }
    }

    // for(int i = 0; i < nr_elffunc; i++){
    //     printf("func:%s -addr:0x%x\n", elf_func[i].name, elf_func[i].addr);
    // }


    return ;

}