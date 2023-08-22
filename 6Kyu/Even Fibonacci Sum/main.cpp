unsigned long long fibonacci(unsigned long long max) {
  unsigned long long sum = 0, first = 0, second = 1;
  while (second < max){
    if (second % 2 == 0){
      sum += second;
    }
    second += first;
    first = second - first;
  }
  return sum;
}
