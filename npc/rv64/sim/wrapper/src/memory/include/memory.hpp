#ifndef __MEM__
#define __MEM__

#include <stdint.h>

#define CONFIG_MBASE 0x80000000

class memory{
public:
    memory(){
        mem = new uint8_t[0xffffffff];
    }
    ~memory(){
        delete[] mem;
    }

    uint64_t mem_read(uint32_t raddr);   //4 bytes
    uint64_t mem_readbylen(uint32_t raddr, int len);
    void mem_write(uint32_t waddr, uint64_t wdata, uint8_t wmask);

    void mem_display(uint32_t addr, int len);

    uint64_t mem_loader(const char* filename);

    uint8_t* get_mem();

private:
    // uint8_t pmem[0x800000];           //若这么写，那么对象会很大，如果传值，很容易栈溢出
    uint8_t *mem;
};

extern memory pmem;

#endif