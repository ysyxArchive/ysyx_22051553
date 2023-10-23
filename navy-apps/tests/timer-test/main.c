#include <stdio.h>
#include <assert.h>
#include <sys/time.h>
#include <NDL.h>

int main() {
  
  NDL_Init(0);
  
  __uint64_t period = 500;



  while (1) {
    while ((NDL_GetTicks()) < period);
    printf("time = %ldms\n", period);
    period += 500;
  }

  NDL_Quit();
}