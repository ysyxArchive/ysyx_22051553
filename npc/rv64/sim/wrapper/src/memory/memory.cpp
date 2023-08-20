#include "memory.hpp"
#include <assert.h>
#include <cstdio>

memory pmem;

uint64_t memory::mem_read(uint64_t raddr){
    // uint32_t addr = (pmem.mem + raddr - CONFIG_MBASE) & ~0x7ul; //错误

    uint64_t addr = (uint64_t)(pmem.mem + raddr - CONFIG_MBASE) & ~0x7ull; 

    return *(uint64_t*)addr;
}

void memory::mem_write(uint64_t waddr, uint64_t wdata, uint8_t wmask){
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
        default:
    }
}

void memory::mem_display(uint64_t addr, int len){  //1个单位打印4字节
    int count_4 = 0;

    uint32_t* loc = (uint32_t *)(pmem.mem + addr - CONFIG_MBASE);
    printf("0x%08x:\n0x%08lx\t",(uint64_t)loc,*loc);

    loc ++;
    len --;
    count_4 ++;

    while(len > 0){
        printf("0x%08lx\t",*loc);
        loc ++;
        len --;
        count_4 ++;
        if(count_4 == 4){
            printf("\n");
            count_4 = 0;
        }
    }
    printf("\n");
}

