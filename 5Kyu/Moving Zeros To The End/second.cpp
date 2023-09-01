#include <vector>
using namespace std;

vector<int> move_zeroes(const vector<int>& input) {
  vector<int> output;
  vector<int> negative;
  unsigned long long size = input.size();
  int count = 0, count2 = 0;
  for(unsigned long long i = 0; i < size; i++){
    if (input[i] > 0){
        output.push_back(input[i]);
    }
    else if (input[i] < 0){
        negative.push_back(input[i]);
        count2++;
    }
    else{
        count++;
    }
  }
  for (int i = 0; i < count; i++){
    output.push_back(0);
  }
  for (int i = 0; i < count2; i++){
    output.push_back(negative[i]);
  }
  return output;
}
