#include <am.h>
#include <klib-macros.h>
#include <klib.h>

int main(const char *args) {
  const char *fmt =
    "Hello, AbstractMachine!\n"
    "mainargs = '%'.\n";

  printf("this is %s\n","printf");

  for (const char *p = fmt; *p; p++) {
    (*p == '%') ? putstr(args) : putch(*p);
  }
  return 0;
}
