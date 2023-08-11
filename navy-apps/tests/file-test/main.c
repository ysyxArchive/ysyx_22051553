#include <stdio.h>
#include <assert.h>

int main() {

  FILE *fp = fopen("/share/files/num", "r+");
  assert(fp);

  

  return 0;
}
