#include <map>
#include <string>

std::map<char, unsigned> count(const std::string& string) {
    
    std::map <char, unsigned> res;

    for ( int i = 0; i < string.length(); i++){
      char temp = string[i];
      res[temp] += 1;
    }
    
    return res;
}
