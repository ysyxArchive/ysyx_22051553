#include <stdint.h>
#include <stdlib.h>
#include <assert.h>

int main(int argc, char *argv[], char *envp[]);
extern char **environ;
void call_main(uintptr_t *args){
  char *argv[] =  {NULL };
  char *envp[] =  {NULL };
  environ = envp;   //环境变量以NULL结尾
  exit(main(0, argv, envp));
  assert(0);
}
