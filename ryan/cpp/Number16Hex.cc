#include <iostream>
using namespace std;

const string HEX = "0123456789ABCDEF";

string intToHex(int x) {
  // to be implemented
  string hexString = "";
  while (x > 0) {
    hexString = HEX[x % 16] + hexString;
    x = x / 16;
  }
  return hexString;
}

int main() {
  string hex = intToHex(2748);
  cout << hex << endl;
  hex = intToHex(1024);
  cout << hex << endl;
  return 0;
}