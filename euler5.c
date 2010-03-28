#include <stdio.h>
int hcf(int a, int b) {
  while (a != 0 && b != 0) {
    if (a > b) {
      a = a % b;
    } else {
      b = b % a;
    }
  }
  return a == 0 ? b : a;
}

main() {
  int lcm = 1;
  int i;
  for (i = 20; i >= 1; i--) {
    lcm = lcm / hcf(lcm, i) * i;
  }
  printf("\n LCM= %d", lcm ) ;
}


