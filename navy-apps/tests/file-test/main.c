#include <stdio.h>
#include <assert.h>

int main() {

  FILE *fp = fopen("/share/files/num", "r+");
  assert(fp);


  long off = fseek(fp, 0, SEEK_END);
  long size = ftell(fp);
  assert(size == 5000);

  printf("here\n");



  return 0;
}
