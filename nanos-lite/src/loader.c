#include <proc.h>
#include <elf.h>
#include "fs.h"

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif

//在AM的Makefile中定义
#if defined(__ISA_AM_NATIVE__)
# define EXPECT_TYPE EM_X86_64
#elif defined(__ISA_RISCV64__)
# define EXPECT_TYPE EM_RISCV 
#else
# error Unsupported ISA
#endif


size_t ramdisk_read(void *buf, size_t offset, size_t len);


static uintptr_t loader(PCB *pcb, const char *filename) {

  int fd = fs_open(filename, 0, 0);
  
  Elf_Ehdr elf_header;
  assert(sizeof(Elf_Ehdr) ==  fs_read(fd, &elf_header, sizeof(Elf_Ehdr)));

  assert(*(uint32_t*)(elf_header.e_ident) == 0x464c457f);  //只读4个字节的方式，小端存储，结构体从[0]到[3]地址递增
  assert(elf_header.e_machine == EXPECT_TYPE);
  
  Elf_Phdr elf_ph[elf_header.e_phnum];
  fs_lseek(fd, elf_header.e_phoff, SEEK_SET);

  for(int i = 0; i < elf_header.e_phnum; i ++){
    
    fs_lseek(fd, elf_header.e_phoff + i*elf_header.e_phentsize, SEEK_SET);   //每次需要重新找位置，不能直接靠open_off,因为在for循环中
    fs_read(fd, &elf_ph[i], elf_header.e_phentsize);
    if(elf_ph[i].p_type == PT_LOAD){
      // char Segment[elf_ph[i].p_filesz];
      char Segment[elf_ph[i].p_memsz];
      fs_lseek(fd, elf_ph[i].p_offset, SEEK_SET);
      fs_read(fd, &Segment, elf_ph[i].p_filesz);
      memcpy((void *)(elf_ph[i].p_vaddr), &Segment, elf_ph[i].p_filesz);
      memset((void *)(elf_ph[i].p_vaddr + elf_ph[i].p_filesz), 0, elf_ph[i].p_memsz - elf_ph[i].p_filesz);  //清零
    }
  }
  

  fs_close(fd);


  return elf_header.e_entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = 0x%lx", (entry));
  ((void(*)())entry) ();
}

