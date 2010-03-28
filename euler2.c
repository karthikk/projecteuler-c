main() {
  int a = 1;
  int b = 2;
  int sum = 0;
  int temp = 0;
  while (a < 4000000) {
    if (a % 2 == 0) {
      sum = sum + a;
    }
    temp = a;
    a = b;
    b = temp + b;
  }
  printf("\n Sum : %d", sum);
  //Answer: 4613732
}
