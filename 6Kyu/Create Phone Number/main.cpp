#include <string>

std::string createPhoneNumber(const int arr [10]){
  std::string digits[10];
  for(int i = 0; i < 10; i++){
    digits[i] = std::to_string(arr[i]);
  }
  return "(" + digits[0] + digits[1] + digits[2] + ") " +
   digits[3] + digits[4] + digits[5] + "-" 
    + digits[6] + digits[7] + digits[8] + digits[9];
}
