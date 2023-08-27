int digital_root(int n)
{
  const int ASCIICODE = 48;
  std::string number = std::to_string(n);
  if(number.length() > 1){
    int sum = 0;
    for (int i = 0; i < number.length(); i++){
      int digit = number[i] - ASCIICODE;
      sum += digit;
    }
    return digital_root(sum);
  }
  else{
    return n;
  }
}
