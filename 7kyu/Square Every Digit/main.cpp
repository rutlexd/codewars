#include <cmath>
#include <string>
using namespace std;
int square_digits(int num) {
  string number = to_string(num);
  string res;
  
  for(unsigned long i = 0; i < number.length(); i++){
    int digit = number[i] - 48;
    res += to_string(static_cast<int>(pow(digit, 2)));
  }
  
  num = stoi(res);
 return num;
}
