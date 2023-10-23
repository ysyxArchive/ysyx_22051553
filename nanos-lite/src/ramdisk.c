#include <common.h>

extern uint8_t ramdisk_start;
extern uint8_t ramdisk_end;
#define RAMDISK_SIZE ((&ramdisk_end) - (&ramdisk_start))

/* The kernel is monolithic, therefore we do not need to
 * translate the address `buf' from the user process to
 * a physical one, which is necessary for a microkernel.
 */

/* read `len' bytes starting from `offset' of ramdisk into `buf' */
size_t ramdisk_read(void *buf, size_t offset, size_t len) {
  assert(offset + len <= RAMDISK_SIZE);
  memcpy(buf, &ramdisk_start + offset, len);
  return len;
}

// size_t ramdisk_alignread(void *buf, size_t offset, size_t len) { //用不上了
//   assert(offset + len <= RAMDISK_SIZE);
//   size_t base_addr = (size_t)(&ramdisk_start + offset);

//   // printf("base addr is 0x%lx\n", base_addr);
//   unsigned int append_head = base_addr & 0x7;

//   if(append_head != 0){
//     uint64_t mask = (1ULL << (append_head * 8)) - 1;
//     uint64_t first_word = ((*((uint64_t*)base_addr)) & mask) << (append_head*8);
//     // printf("first_word is 0x%x\n", first_word);

//     memcpy(buf, &first_word, 8);
//     size_t remain_words = (base_addr - (base_addr & 0x7)) + 8;
//     // printf("off and src addr is 0x%x\n", remain_words);
//     memcpy(buf, (void*)(remain_words), len - (8-append_head));
//   }else{
//     memcpy(buf, (void*)(base_addr), len);
//   }
  
//   return len;
// }

/* write `len' bytes starting from `buf' into the `offset' of ramdisk */
size_t ramdisk_write(const void *buf, size_t offset, size_t len) {
  assert(offset + len <= RAMDISK_SIZE);
  memcpy(&ramdisk_start + offset, buf, len);
  return len;
}

void init_ramdisk() {
  Log("ramdisk info: start = %p, end = %p, size = %d bytes",
      &ramdisk_start, &ramdisk_end, RAMDISK_SIZE);
}

size_t get_ramdisk_size() {
  return RAMDISK_SIZE;
}
