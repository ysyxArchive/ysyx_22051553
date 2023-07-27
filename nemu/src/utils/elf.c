#include <common.h>
#include <elf.h>


typedef struct{
    char name[20];
    paddr_t addr;
    int len;
}Func;

FILE *elf_fp = NULL;
Func func[100] = {};
int nr_func = 0;



void init_elf(const char *elf_file){

    char shstrtab[512];
    char strtab[4096];
    Elf64_Sym symtab[512];

    int avoid_warning = 0;
    
    Elf64_Ehdr ehdr;   //elf头结构
    
    if(elf_file == NULL)
        return ;


    elf_fp = fopen(elf_file, "r");
    Assert(elf_fp, "Can not open '%s'", elf_file);
    avoid_warning = fread(&ehdr, sizeof(Elf64_Ehdr), 1, elf_fp);    //elf头

    Elf64_Shdr shdr[ehdr.e_shnum];              //段表
    fseek(elf_fp, ehdr.e_shoff, SEEK_SET);
    for(int i = 0; i < ehdr.e_shnum; i++){
        avoid_warning = fread(&shdr[i], sizeof(Elf64_Shdr), 1, elf_fp);
    }

    Elf64_Shdr shdr_shstrtab = shdr[ehdr.e_shstrndx];       //段表字符串表
    fseek(elf_fp, shdr_shstrtab.sh_offset, SEEK_SET);
    avoid_warning = fread(shstrtab, shdr_shstrtab.sh_size, 1, elf_fp);
    
    for(int i = 0; i < ehdr.e_shnum; i++){                  //字符串表
        if( strcmp(".strtab", &shstrtab[shdr[i].sh_name]) == 0){
            fseek(elf_fp, shdr[i].sh_offset, SEEK_SET);
            avoid_warning = fread(strtab, shdr[i].sh_size, 1, elf_fp);
            break;
        }
    }
    

    
    int entnum = 0;                                         //符号表

    for(int i = 0; i < ehdr.e_shnum; i++){                  
        if( strcmp(".symtab", &shstrtab[shdr[i].sh_name]) == 0){
            fseek(elf_fp, shdr[i].sh_offset, SEEK_SET);
            entnum = shdr[i].sh_size/shdr[i].sh_entsize;
            avoid_warning = fread(symtab, shdr[i].sh_entsize, entnum, elf_fp);
            assert(avoid_warning == entnum);
            break;
        }
    }
    

    //解析函数项    
    for(int i = 0; i < entnum; i ++){
        if( (symtab[i].st_info & 0x0f) == STT_FUNC){ //低四位
            if(symtab[i].st_size != 0){   //例如_start
                strcpy(func[nr_func].name, &strtab[symtab[i].st_name]);
                func[nr_func].addr = symtab[i].st_value;
                func[nr_func].len = symtab[i].st_size;
                nr_func ++;
            }
        
        }
    }
    printf("p2\n");

    return ;
}