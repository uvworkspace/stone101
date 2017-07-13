#include <iostream>
using namespace std;

int charToInt(char c) {
  if (c >= '0' && c <= '9') {
    return c - '0';
  } else if (c >= 'a' && c <= 'z') {
    return c - 'A' + 10;
  } else if (c >= 'A' && c <= 'Z') {
    return c - 'A' + 10;
  }  
  return 0;
}

int hexToInt(const string& hex) {
  // to be implemented
  int sum = 0;
  for (int i=0, len=hex.length(); i<len; i++) {
    char c = hex[i];
    int num = charToInt(c);
    sum = sum * 16 + num;
  }
  
  return sum;
}

int hexToInt2(const char* hex) {
  // to be implemented
  int sum = 0;
  for (int i=0; hex[i]!='\0'; i++) {
    char c = hex[i];
    int num = 0;
    if (c >= '0' && c <= '9') {
      num = c - '0';
    } else if (c >= 'a' && c <= 'z') {
      num = c - 'a' + 10;
    } else if (c >= 'A' && c <= 'Z') {
      num = c - 'A' + 10;
    }
    sum = sum * 16 + num;
  }
  
  return sum;
}
  
int main() {  
  int dec = hexToInt("ABC");
  cout << dec << endl;
  return 0;
}