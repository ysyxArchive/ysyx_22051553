#include "memory.hpp"
#include <assert.h>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <elf.h>
#include <array>
#include <debug.h>
#include <define.h>

memory pmem;

uint8_t* memory::get_mem(){
    return mem;
}

uint64_t memory::mem_read(uint32_t raddr){ //用于rtl

    // uint32_t addr = (pmem.mem + raddr - CONFIG_MBASE) & ~0x7ul; //错误

    uint64_t addr = (uint64_t)(pmem.mem + raddr - CONFIG_MBASE) & ~0x7ull; 

    // #ifdef MTRACE
    // printf(ANSI_FMT("read value is 0x%lx\n", ANSI_FG_YELLOW),*(uint64_t*)addr);
    // #endif

    return *(uint64_t*)addr;
}

uint64_t memory::mem_readbylen(uint32_t raddr, int len){ //用于仿真
    // uint32_t addr = (pmem.mem + raddr - CONFIG_MBASE) & ~0x7ul; //错误
    switch (len) {
        case 1: return *(uint8_t  *)(((uint64_t)(pmem.mem) + raddr - CONFIG_MBASE));
        case 2: return *(uint16_t *)(pmem.mem + raddr - CONFIG_MBASE);
        case 4: return *(uint32_t *)(pmem.mem + raddr - CONFIG_MBASE);
    }

    return 0;
}

void memory::mem_write(uint32_t waddr, uint64_t wdata, uint8_t wmask){

    #ifdef MTRACE
    printf(ANSI_FMT("write mem at " "0x%016lx" " for %d bytes\n", ANSI_FG_YELLOW),waddr, 
    (wmask == 0xff) ? 8 : 
    (wmask == 0x0f) ? 4 : 
    (wmask == 0x03) ? 2 : 
    (wmask == 0x01) ? 1 : 0
    );

    printf("write data is 0x%lx\n", wdata);
    #endif

    for(int i = 0; i < 8; i ++){
        if(wmask & 0x1 == 1){
            *(uint8_t*)(pmem.mem + waddr + i - CONFIG_MBASE) = (uint8_t)wdata;
            wmask = wmask >> 1;
            wdata = wdata >> 8;
        }
    }
}

void memory::mem_display(uint32_t addr, int len){  //1个单位打印4字节
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


uint64_t memory::mem_loader(const char* filename){
    uint64_t size = 0;

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

        if(elf_ph[i].p_type == PT_LOAD && (elf_ph[i].p_memsz != 0)) {   //例如bit（cputest中）的某个Segment虽然是LOAD但是长度为0
            file.seekg(elf_ph[i].p_offset, std::ios::beg);
            
            file.read( (char *)(pmem.mem + elf_ph[i].p_vaddr - CONFIG_MBASE), (elf_ph[i].p_filesz));
            
            memset((void *)(pmem.mem + elf_ph[i].p_vaddr + elf_ph[i].p_filesz - CONFIG_MBASE), 0, elf_ph[i].p_memsz - elf_ph[i].p_filesz);
            size = elf_ph[i].p_vaddr + elf_ph[i].p_memsz - CONFIG_MBASE; //最后一个Segment结束的地方，因为Segment之间会有对齐，占用空间
        }
        
    }
    file.close();
    printf("size is %ld\n", size);

    return size;


}



