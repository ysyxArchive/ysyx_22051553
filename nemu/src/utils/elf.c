#include <common.h>
#include <elf.h>

char shstrtab[512];
char strtab[512];
char symtab[512];
FILE *elf_fp = NULL;

void init_elf(const char *elf_file){
    int avoid_warning = 0;
    
    Elf64_Ehdr ehdr;   //elf头结构
    
    if(elf_file == NULL)
        return ;


    elf_fp = fopen(elf_file, "r");
    Assert(elf_fp, "Can not open '%s'", elf_file);
    avoid_warning = fread(&ehdr, 1, sizeof(Elf64_Ehdr), elf_fp);

    Elf64_Shdr shdr[ehdr.e_shnum];
    fseek(elf_fp, ehdr.e_shoff, SEEK_SET);
    for(int i = 0; i < ehdr.e_shnum; i++){
        avoid_warning = fread(&shdr[i], 1, sizeof(Elf64_Shdr), elf_fp);
    }

    Elf64_Shdr shdr_shstrtab = shdr[ehdr.e_shstrndx];
    fseek(elf_fp, shdr_shstrtab.sh_offset, SEEK_SET);
    avoid_warning = fread(shstrtab, 1, shdr_shstrtab.sh_size, elf_fp);
    printf("%s, %d", shstrtab, avoid_warning);
    return ;
}