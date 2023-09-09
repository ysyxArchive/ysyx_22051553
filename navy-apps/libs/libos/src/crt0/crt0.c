#include <stdint.h>
#include <stdlib.h>
#include <assert.h>

int main(int argc, char *argv[], char *envp[]);
extern char **environ;
void call_main(uintptr_t *args) {
  char *empty[] =  {NULL };
  char *envp[] =  {"NWM_APP" };
  char **argv =  empty;
  environ = envp;
  exit(main(0, empty, empty));
  assert(0);
}
