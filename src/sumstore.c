#include <stdio.h>

long plus(long x, long y) {
  return x + y;
} 

void sumstore(long x, long y, 
              long *dest)
{
  long t = plus(x, y);
  *dest = t;
}

int main() {
  long res;
  sumstore(1, 2, &res);
  printf("%ld\n", res);
  return 0;
}
