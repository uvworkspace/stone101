#include <iostream>
#include <cctype>
using namespace std;
int main(){
  char CH;
  for(char ch = 'a'; ch <= 'z'; ch++){
    CH = toupper(ch);
    cout << ch << " => " << CH;
  }
}