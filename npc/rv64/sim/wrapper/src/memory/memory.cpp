#include "memory.hpp"
#include <assert.h>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <elf.h>
#include <array>

memory pmem;

uint64_t memory::mem_read(uint64_t raddr){ //用于rtl
    // uint32_t addr = (pmem.mem + raddr - CONFIG_MBASE) & ~0x7ul; //错误

    uint64_t addr = (uint64_t)(pmem.mem + raddr - CONFIG_MBASE) & ~0x7ull; 

    return *(uint64_t*)addr;
}

uint64_t memory::mem_readbylen(uint64_t raddr, int len){ //用于仿真
    // uint32_t addr = (pmem.mem + raddr - CONFIG_MBASE) & ~0x7ul; //错误
    switch (len) {
        case 1: return *(uint8_t  *)(pmem.mem + raddr - CONFIG_MBASE);
        case 2: return *(uint16_t *)(pmem.mem + raddr - CONFIG_MBASE);
        case 4: return *(uint32_t *)(pmem.mem + raddr - CONFIG_MBASE);
    }

    return 0;
}

void memory::mem_write(uint64_t waddr, uint64_t wdata, uint8_t wmask){
    printf("addr is 0x%lx\n", waddr);

    assert(wmask == 0xff || wmask == 0x0f || wmask == 0x03 || wmask == 0x01);

    switch (wmask)
    {
        case 0xff:
            *(uint64_t*)(pmem.mem + waddr - CONFIG_MBASE) = wdata;
            break;
        case 0x0f:
            *(uint32_t*)(pmem.mem + waddr - CONFIG_MBASE) = wdata;
            break;
        case 0x03:
            *(uint16_t*)(pmem.mem + waddr - CONFIG_MBASE) = wdata;
            break;
        case 0x01:
            *(uint8_t*)(pmem.mem + waddr - CONFIG_MBASE) = wdata;
            break;
        default:;
    }
}

void memory::mem_display(uint64_t addr, int len){  //1个单位打印4字节
    int count_4 = 0;

    uint32_t* loc = (uint32_t *)(pmem.mem + addr - CONFIG_MBASE);
    printf("0x%08lx:\n0x%08x\t",addr,*loc);

    addr += 4;
    len --;
    count_4 ++;

    while(len > 0){
        loc = (uint32_t *)(pmem.mem + addr - CONFIG_MBASE);
        printf("0x%08x\t",*loc);
        addr += 4;
        len --;
        count_4 ++;
        if(count_4 == 4){
            printf("\n");
            count_4 = 0;
        }
    }
    printf("\n");
}


void memory::mem_loader(const char* filename){
    std::ifstream file;
    file.open(filename, std::ios::binary);
    assert(file.is_open());

    Elf64_Ehdr elf_header;
    file.read(reinterpret_cast<char *>(&elf_header), sizeof(Elf64_Ehdr));

    assert(*(uint32_t*)(elf_header.e_ident) == 0x464c457f);  //只读4个字节的方式，小端存储，结构体从[0]到[3]地址递增

    Elf64_Phdr elf_ph[elf_header.e_phnum];

    for(int i = 0; i < elf_header.e_phnum; i ++){
        file.seekg(elf_header.e_phoff + i*elf_header.e_phentsize, std::ios::beg);
        file.read(reinterpret_cast<char *>(&elf_ph[i]), (elf_header.e_phentsize));

        if(elf_ph[i].p_type == PT_LOAD){
            file.seekg(elf_ph[i].p_offset, std::ios::beg);
            file.read( (char *)(pmem.mem + elf_ph[i].p_vaddr - CONFIG_MBASE), (elf_ph[i].p_filesz));
            memset((void *)(pmem.mem + elf_ph[i].p_vaddr + elf_ph[i].p_filesz - CONFIG_MBASE), 0, elf_ph[i].p_memsz - elf_ph[i].p_filesz);
        }
    }

}

// void memory::mem_getelf(char* filename){ //解析elf
    
//     // std::array<char,512> shstrtab;
//     char shstrtab[512];
//     char strtab[4096];
//     Elf64_Sym symtab[512];

//     int avoid_warning = 0;
    
//     Elf64_Ehdr ehdr;   //elf头结构
    
//     if(filename == NULL)
//         return ;

//     std::ifstream elf_in;
//     elf_in.open(filename, std::ios::binary);

//     assert(elf_in.is_open());

//     elf_in.read(reinterpret_cast<char *>(&ehdr), sizeof(Elf64_Ehdr));      //elf头
 
//     Elf64_Shdr shdr[ehdr.e_shnum];                        //段表
//     elf_in.seekg(ehdr.e_shoff, std::ios::beg);
//     for(int i = 0; i < ehdr.e_shnum; i++){
//         elf_in.read(reinterpret_cast<char *>(&shdr[i]), sizeof(Elf64_Shdr));
//     }

//     Elf64_Shdr shdr_shstrtab = shdr[ehdr.e_shstrndx];     //段表字符串表
//     elf_in.seekg(shdr_shstrtab.sh_offset, std::ios::beg);
//     elf_in.read(shstrtab, shdr_shstrtab.sh_size);

//     for(int i = 0; i < ehdr.e_shnum; i ++){ //字符串表
//         if(strcmp(".strtab", &shstrtab[shdr[i].sh_name]) == 0){
//             elf_in.seekg(shdr[i].sh_offset, std::ios::beg);
//             elf_in.read(strtab, shdr[i].sh_size);
//         }
//     }


//     int sym_entnum = 0;
//     for(int i = 0; i < ehdr.e_shnum; i ++){ //符号表
//         if(strcmp(".symtab", &shstrtab[shdr[i].sh_name]) == 0){
//             elf_in.seekg(shdr[i].sh_offset, std::ios::beg);
//             elf_in.read(strtab, shdr[i].sh_size);
//             sym_entnum = shdr[i].sh_size/shdr[i].sh_entsize;
//         }
//     }


//     return ;

// }

