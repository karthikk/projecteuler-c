#include <stdio.h>
main() {
  long long num = 600851475143LL;
  int n = 2;
  while (n != num) {
    if (num % n == 0) {
      num = num / n;
    }
    n++;
  }
  printf("\nAnswer: %lld", num);
}
