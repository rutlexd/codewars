#include <vector>
using namespace std;
std::vector<int> move_zeroes(const std::vector<int>& input) {
  vector<int> temp;
  unsigned long long size = input.size();
  int count = 0;
  for(unsigned long long i = 0; i < size; i++){
    if (input[i] != 0){
      temp.push_back(input[i]);
    }
    else{
      count++;
    }
  }
  for (int i = 0; i < count; i++){
    temp.push_back(0);
  }
  return temp;
}
