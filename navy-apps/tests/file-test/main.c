#include <stdio.h>
#include <assert.h>

int main() {

  FILE *fp = fopen("/share/files/num", "r+");
  assert(fp);


  long off = fseek(fp, 0, SEEK_END);
  long size = ftell(fp);
  assert(size == 5000);

  fseek(fp, 500 * 5, SEEK_SET);
  int i, n;

  for (i = 500; i < 1000; i ++) {
    printf("i = %d\n", i);
    fscanf(fp, "%d", &n);
    assert(n == i + 1);
  }


  printf("PASS!!!\n");

  return 0;
}
