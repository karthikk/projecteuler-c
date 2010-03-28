#include <stdio.h>

main() {
  int a[10001];
  int i, j, cur = 2;
  for (i = 0; i < 10001; i++) {
    a[i] = 0;
  }

  int isPrime;
  j = 0;
  while (a[10000] == 0) {
    isPrime = 1;
    for (i = 0; a[i] != 0 && i < 10001; i++) {
      if (cur % a[i] == 0) {
	isPrime = 0;
	break;
      }
    }
    if (isPrime) {
      a[j] = cur;
      j += 1;
    }
    cur += 1;
  }
  printf("\n Answer: %d", a[10000]);
}
