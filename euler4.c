#include <stdio.h>

int isPalin(int x) {
  int nums[6];
  int pre = x / 1000;
  int post = x % 1000;
  int invPost = 0;
  int i;

  while (post > 0) {
    invPost = invPost*10 + post%10;
    post = post/10;
  }
  return pre == invPost;
  /*
  char preStr[4]="000", postStr[4]="000";
  i = 2;
  while (pre > 0) {
    preStr[i] = 48 + (pre % 10);
    pre = pre / 10;
    i -= 1;
  }

  i = 2;
  while (post > 0) {
    postStr[i] = 48 + (post % 10);
    post = post / 10;
    i -= 1;
  }

  for (i = 0; i < 3; i++) {
    if (preStr[i] != postStr[2-i]) {
      return 0;
    }
  }
  return 1;
  */
}

main() {
  int i, j;
  int max = 0;
  for (i = 999; i >= 100; i--) {
    for (j = 999; j > 100; j--) {
      int p = i * j;
      if (isPalin(p)) {
	if (p > max) {
	  max = p;
	}
      }
      
    }
  }
  printf("Max : %d", max);
}
