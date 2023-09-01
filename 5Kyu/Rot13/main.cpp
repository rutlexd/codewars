#include <string>
using namespace std;

string rot13(string msg)
{
  string res = "";
  int hardLvl = 13;

  for(unsigned long i = 0; i < msg.length(); i++){
    int letter = msg[i];
    
    if (letter >= 'a' && letter <= 'z'){
      if (letter + hardLvl > 122){
        res += (96 + (letter + hardLvl - 'z'));
      }
      else{
        res += letter + hardLvl;
      }
    }
    else if(letter >= 'A' && letter <= 'Z'){
      if (letter + hardLvl > 'Z'){
        res += (64 + (letter + hardLvl - 'Z'));
      }
      else{
        res += letter + hardLvl;
      }
    }
    else{
      res += letter;
    } 
  }
  
  return res;
}