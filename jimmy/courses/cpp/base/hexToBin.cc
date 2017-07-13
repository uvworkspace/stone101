#include <iostream>
using namespace std;

const string BIN = "01";

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
  
string hexDigitToBin(char c, bool firstDigit) {
  int num = charToInt(c);
  string binStr("");
  for (int i=0; i<4; i++) {
    binStr = BIN[num % 2] + binStr;
    num /= 2;  
    if (firstDigit && num == 0) break;
  }
  return binStr;
}
  
string hexToBin(const string& hex) {
  string binStr("");
  for (int i=0; i<hex.length(); i++) {
    binStr += hexDigitToBin(hex[i], i==0);
  }
  return binStr;
}


int main() {
  string bin = hexToBin("ABC");
  cout << bin << endl;
  bin = hexToBin("3BC");
  cout << bin << endl;
}