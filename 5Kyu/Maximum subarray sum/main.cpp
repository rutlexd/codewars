#include <vector>
using namespace std;
int maxSequence(const std::vector<int>& arr){
  int maxSum = 0;
  for (int i = 0; i < arr.size(); i++){
    int sum = arr[i];
    for (int j = i + 1; j < arr.size(); j++){
      sum += arr[j];
      if (maxSum < sum){
        maxSum = sum;
      }
    }
  }
  return maxSum;
}
