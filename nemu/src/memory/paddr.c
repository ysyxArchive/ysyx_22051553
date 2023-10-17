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

#include <memory/host.h>
#include <memory/paddr.h>
#include <device/mmio.h>
#include <isa.h>

#if   defined(CONFIG_PMEM_MALLOC)
static uint8_t *pmem = NULL;
#else // CONFIG_PMEM_GARRAY
static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};                   //pmem是客户机的内存空间，单位大小为字节
#endif


//从paddr,即客户程序的地址，转到假设的内存的地址pmem[n]
uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }     
/*                                                                                
  由于riscv64的内存物理地址从0x8000_0000开始，所以paddr是在0x8000_0000基础上增长的
  例如paddr = 0x8000_0002，则返回的地址为&pmem[2]。

  从总体物理地址（0x0开始），转换到相对于pmem的地址（从0x8000_0000开始）
*/

//从pmem[n]转到程序地址
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }

static word_t pmem_read(paddr_t addr, int len) {
  #ifdef CONFIG_MTRACE
    Log("read mem at " FMT_PADDR " for %d bytes",addr, len);
    
  #endif
  word_t ret = host_read(guest_to_host(addr), len);  //实际是读pmem[n]
  // printf("ret data is 0x%lx\n", ret);
  return ret;
}

static void pmem_write(paddr_t addr, int len, word_t data) {
  if(addr >= 0x83153e00 && addr <= 0x83153e80){
    printf("addr is 0x%x\n", addr);
    printf("data is 0x%x\n", *(uint8_t*)guest_to_host(0x83153e60));
  }
    
  #ifdef CONFIG_MTRACE
    Log("write mem at " FMT_PADDR " for %d bytes",addr, len);
    // printf("write data is 0x%lx\n", data);
  #endif
  host_write(guest_to_host(addr), len, data);   //写pmem[n]
}

static void out_of_bound(paddr_t addr) {
  panic("address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
      addr, PMEM_LEFT, PMEM_RIGHT, cpu.pc);
}

void init_mem() {
#if   defined(CONFIG_PMEM_MALLOC)
  pmem = malloc(CONFIG_MSIZE);
  assert(pmem);
#endif
#ifdef CONFIG_MEM_RANDOM
  uint32_t *p = (uint32_t *)pmem;
  int i;
  for (i = 0; i < (int) (CONFIG_MSIZE / sizeof(p[0])); i ++) {
    p[i] = rand();
  }
#endif
  Log("physical memory area [" FMT_PADDR ", " FMT_PADDR "]", PMEM_LEFT, PMEM_RIGHT);
}

word_t paddr_read(paddr_t addr, int len) {
  if (likely(in_pmem(addr))) return pmem_read(addr, len);
  IFDEF(CONFIG_DEVICE, return mmio_read(addr, len));
  out_of_bound(addr);
  return 0;
}

void paddr_write(paddr_t addr, int len, word_t data) {
  if (likely(in_pmem(addr))) { pmem_write(addr, len, data); return; }
  IFDEF(CONFIG_DEVICE, mmio_write(addr, len, data); return);
  out_of_bound(addr);
}
