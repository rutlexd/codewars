unsigned int countBits(unsigned long long n){
  int one = 0;
  while(n >= 1){
    if (n % 2 == 1){
      one++;
    }
    n /= 2;
  }
  return one;
}
