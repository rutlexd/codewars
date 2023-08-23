std::string get_middle(std::string input) 
{
  std::string res;
  if (input.length() % 2 == 0){
    res = input[input.length() / 2 -1];
    res += input[input.length() / 2];
  }
  else{
    res = input[input.length() / 2];
  }
  return res;
}
