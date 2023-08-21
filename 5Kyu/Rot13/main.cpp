#include <string>
using namespace std;

string rot13(string msg)
{
  string res = "";
  
  
  for(unsigned long i = 0; i < msg.length(); i++){
    int letter = msg[i];
    
    if (letter >= 97 && letter <= 122){
      if (letter + 13 > 122){
        res += (96 + (letter + 13 - 122));
      }
      else{
          res += letter + 13;
      }
    }
    else if(letter >= 65 && letter <= 90){
      if (letter + 13 > 90){
        res += (64 + (letter + 13 - 90));
      }
      else{
          res += letter + 13;
      }
    }
    else{
      res += letter;
    } 
  }
  
  return res;
