#include <common.h>
#include <elf.h>


FILE *elf_fp = NULL;

void init_elf(const char *elf_file){

    char shstrtab[512];
    char strtab[512];
    Elf64_Sym symtab[128];

    int avoid_warning = 0;
    
    Elf64_Ehdr ehdr;   //elf头结构
    
    if(elf_file == NULL)
        return ;


    elf_fp = fopen(elf_file, "r");
    Assert(elf_fp, "Can not open '%s'", elf_file);
    avoid_warning = fread(&ehdr, 1, sizeof(Elf64_Ehdr), elf_fp);    //elf头

    Elf64_Shdr shdr[ehdr.e_shnum];              //段表
    fseek(elf_fp, ehdr.e_shoff, SEEK_SET);
    for(int i = 0; i < ehdr.e_shnum; i++){
        avoid_warning = fread(&shdr[i], 1, sizeof(Elf64_Shdr), elf_fp);
    }

    Elf64_Shdr shdr_shstrtab = shdr[ehdr.e_shstrndx];       //段表字符串表
    fseek(elf_fp, shdr_shstrtab.sh_offset, SEEK_SET);
    avoid_warning = fread(shstrtab, 1, shdr_shstrtab.sh_size, elf_fp);
    
    for(int i = 0; i < ehdr.e_shnum; i++){                  //字符串表
        if( strcmp(".strtab", &shstrtab[shdr[i].sh_name]) == 0){
            fseek(elf_fp, shdr[i].sh_offset, SEEK_SET);
            avoid_warning = fread(strtab, 1, shdr[i].sh_size, elf_fp);
            break;
        }
    }

    for(int i = 0; i < ehdr.e_shnum; i++){                  //符号表
        if( strcmp(".symtab", &shstrtab[shdr[i].sh_name]) == 0){
            fseek(elf_fp, shdr[i].sh_offset, SEEK_SET);
            avoid_warning = fread(symtab, shdr[i].sh_size/shdr[i].sh_entsize, shdr[i].sh_entsize, elf_fp);
            assert(avoid_warning == shdr[i].sh_size/shdr[i].sh_entsize);
            break;
        }
    }


    return ;
}