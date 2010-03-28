int sumOfSquares(int n) {
  return n * (n + 1) * (2 * n + 1) /6;
}

int squareOfSum(int n) {
  int sum = n * (n + 1) /2;
  return sum * sum;
}

main() {
  printf("\n Diff : %d", squareOfSum(100) - sumOfSquares(100));
  //Answer: 25164150
}

