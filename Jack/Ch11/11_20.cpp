#include <iostream>
using namespace std;

bool char_exist(const char *c, char ch){
  while(*c != '\0'){
    if(*c == ch)
      return true; 
    c++; 
  }
  return false;
}

int main(){
  const char *word = "this is a word";
  for(char ch = 'a'; ch <= 'z'; ch++)
    if(char_exist(word, ch)) 
      cout << "\"" << ch << "\"" << " is in " << "\"" << word << "\"\n";
}