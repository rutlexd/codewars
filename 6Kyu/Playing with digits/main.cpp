#include <string>
#include <cmath>
using namespace std;
class DigPow
{
public:
  static int digPow(int n, int p){
    int sum = 0;
    string numbers = to_string(n);
    int len = numbers.length();
    for (int i = 0; i < len; i++){
      char dig = numbers[i];
      int intValue = stoi(string(1, dig));
      sum += pow(intValue, p);
      p++;
    }
    if (sum % n == 0){
      return sum / n;
    }
    return -1;
  }
};
