#include <proc.h>
#include <elf.h>

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
  
  Elf_Ehdr elf_header;
  assert(sizeof(Elf_Ehdr) ==  ramdisk_read(&elf_header, 0, sizeof(Elf_Ehdr)));

  assert(*(uint32_t*)(elf_header.e_ident) == 0x464c457f);  //只读4个字节的方式，小端存储，结构体从[0]到[3]地址递增
  assert(elf_header.e_machine == EXPECT_TYPE);
  
  Elf_Phdr elf_ph[elf_header.e_phnum];
  for(int i = 0; i < elf_header.e_phnum; i ++){
    ramdisk_read(&elf_ph[i], elf_header.e_phoff + i * elf_header.e_phentsize,
    elf_header.e_phentsize);

    if(elf_ph[i].p_type == PT_LOAD){
      char Segment[elf_ph[i].p_filesz];
      ramdisk_read(&Segment, elf_ph[i].p_offset, elf_ph[i].p_filesz);
      memcpy((void *)(elf_ph[i].p_vaddr), &Segment, elf_ph[i].p_filesz);
      memset((void *)(elf_ph[i].p_vaddr + elf_ph[i].p_filesz), 0, elf_ph[i].p_memsz - elf_ph[i].p_filesz);  //清零
    }
  }


  return elf_header.e_entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = 0x%lx\n", (entry));
  ((void(*)())entry) ();
}

