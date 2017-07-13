#include <iostream>
using namespace std;

const string HEX = "0123456789ABCDEF";

string intToHex(int x) {
  string hexStr("");
  while (x > 0) {
    hexStr = HEX[x % 16] + hexStr;
    x /= 16;
  }
  return hexStr;
}

int main() {
  string hex = intToHex(2748);
  cout << hex << endl;
  hex = intToHex(1024);
  cout << hex << endl;
  return 0;
}