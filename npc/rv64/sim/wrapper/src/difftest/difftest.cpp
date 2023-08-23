#include <common.h>
#include <dlfcn.h>
#include <assert.h>
#include <memory.hpp>
#include <isa-def.hpp>

void (*ref_difftest_memcpy)(uint64_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;


void init_difftest(const char *ref_so_file, long img_size, int port){
    assert(ref_so_file != NULL);

    void *handle;
    handle = dlopen(ref_so_file, RTLD_LAZY);

    ref_difftest_memcpy = (void(*)(uint64_t, void*, size_t, bool))dlsym(handle, "difftest_memcpy");
    assert(ref_difftest_memcpy);

    ref_difftest_regcpy = (void(*)(void*, bool))dlsym(handle, "difftest_regcpy");
    assert(ref_difftest_regcpy);

    ref_difftest_exec = (void(*)(uint64_t))dlsym(handle, "difftest_exec");
    assert(ref_difftest_exec);

    ref_difftest_raise_intr = (void(*)(uint64_t))dlsym(handle, "difftest_raise_intr");
    assert(ref_difftest_raise_intr);

    void (*ref_difftest_init)(int, struct diff_context_t*) = (void (*)(int, struct diff_context_t*))dlsym(handle, "difftest_init");
    assert(ref_difftest_init);

    Log("Differential testing: %s", ANSI_FMT("ON", ANSI_FG_GREEN));
    Log("The result of every instruction will be compared with %s. "
      "This will help you a lot for debugging, but also significantly reduce the performance. "
      "If it is not necessary, you can turn it off in menuconfig.", ref_so_file);

    ref_difftest_init(port, (struct diff_context_t*)(cpu_ins.get_reg_bundle()));
    ref_difftest_memcpy(0x80000000, pmem.get_mem(), img_size, 1);
    // ref_difftest_regcpy(cpu_ins.get_reg_bundle(), 1);

}



bool difftest_checkregs(struct diff_context_t* ref_r, uint64_t pc){

  struct diff_context_t* cpu = (struct diff_context_t*)(cpu_ins.get_reg_bundle());  

    printf("ref:\n");

    printf("pc\t\t0x%-16lx\t\t%-20ld\n", ref_r -> pc, ref_r -> pc);

    for(int i = 0; i < 32; i ++){
      printf("0x%-16lx\t\t%-20ld\n", ref_r -> gpr[i], ref_r -> gpr[i]);
    }  

    printf("dut:\n");
    cpu_ins.gpr_display();

  for(int i = 0; i < 32; i++){
    if(ref_r->gpr[i] != cpu -> gpr[i])
      return false;
  }
  if(ref_r->pc != cpu -> pc) 
    return false;
  
  return true;
}

bool difftest_step(uint64_t pc) {
  struct diff_context_t ref_r;

  ref_difftest_exec(1);
  ref_difftest_regcpy(&ref_r, 0);

  return difftest_checkregs(&ref_r, pc);
}