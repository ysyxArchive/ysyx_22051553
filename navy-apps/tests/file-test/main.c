#include <stdio.h>
#include <assert.h>

int main() {

  FILE *fp = fopen("/share/files/num", "r+");
  FILE *f1 = fopen("/share/files/num", "r+");
  FILE *f2 = fopen("/share/files/num", "r+");
  FILE *f3 = fopen("/share/files/num", "r+");
  FILE *f4 = fopen("/share/files/num", "r+");

  assert(fp);



  fclose(fp);

  printf("PASS!!!\n");

  return 0;
}
