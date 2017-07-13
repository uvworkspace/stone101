#include <iostream>
using namespace std;

const string HEX = "0123456789ABCDEF";
  
string binToHex(string bin) {
  string hex("");
  for (int i=bin.length()-1; i>=0; i-=4) {
    int sum = 0;
    for (int j=3; j>=0; j--) {
      int idx = i-j;
      if (idx < 0) continue;
      char c = bin[idx];
      sum = sum*2 + (c - '0');
    }
    hex = HEX[sum] + hex;
  }
  return hex;
}

int main() {
  string hex = binToHex("101010111100");
  cout << hex << endl;
  hex = binToHex("1110111100");
  cout << hex << endl;
  return 0;
}