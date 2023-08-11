#include <stdio.h>
#include <assert.h>

int main() {

  FILE *fp = fopen("/share/files/num", "r+");
  printf("fd = %d\n", fp->_fileno);
  assert(fp);


  long off = fseek(fp, 0, SEEK_END);
  long size = ftell(fp);
  assert(size == 5000);

  fclose(fp);

  printf("PASS!!!\n");

  return 0;
}
