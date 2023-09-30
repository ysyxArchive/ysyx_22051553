#include <am.h>
#include "include/npc.h"

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint32_t KBD_Bundle = inl(KBD_ADDR);
  kbd->keydown = KBD_Bundle & KEYDOWN_MASK;
  kbd->keycode = KBD_Bundle & (KEYDOWN_MASK -1);
}

