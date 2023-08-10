#include <stdio.h>
#include <assert.h>
#include <sys/time.h>

int main() {
  struct timeval tv;
  gettimeofday(&tv, NULL);
  __uint64_t period = 500;
  while (1) {
    while ((tv.tv_sec * 1000 + tv.tv_usec / 1000) < period) {
      gettimeofday(&tv, NULL);
    }
    period += 500;
    printf("time = %ld\n", period);
  }
}