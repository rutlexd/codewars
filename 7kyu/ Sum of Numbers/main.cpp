int get_sum(int a, int b)
{ 
  if (a > b){
    int temp = b;
    b = a;
    a = temp;
  }
  
  if (a == b){
    return a;
  }
  
  int res = 0;
  
  for (int i = a; i <= b; i++){
    res += a;
    a++;
  }
  
  return res;
}
