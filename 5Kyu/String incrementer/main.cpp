#include <string>
using namespace std;
std::string incrementString(const std::string &str)
{   

    string number = "", qwe = "";
    
    for(int i = 0; i < str.length(); i++){
      if (str[i] > 47 && str[i] < 58){
        number += str[i];
      }
      else{
        number = "";
      }
    }
    if (number.length() == 0){
      number += "0";
    }
      qwe = str;
      int nums = stoi(number);
      nums++;
  
    for (int i = 0, j = str.length(); i < to_string(nums).length(); i++ , j--){
      if (qwe[j-1] > 47 && qwe[j-1] < 58){
        qwe.erase(j-1);
      }
    }

    qwe += to_string(nums);
    
    return qwe;
}
