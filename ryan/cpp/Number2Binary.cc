#include <iostream>
using namespace std;

const string BIN = "01";

string intToBin(int x) {
  // to be implemented
  string binString = "";
  while (x > 0) {
    binString = BIN[x % 2] + binString;
    x = x / 2;
  }
  return binString;
}

string intToBin2(int x) {
  string binStr = "";
  while (x > 0) {
    binStr = BIN[x % 2] + binStr;
    x /= 2; 
  }
  return binStr;
}

int main() {
  string bin = intToBin(2748);
  cout << bin << endl;
  bin = intToBin(1024);
  cout << bin << endl;
  return 0;
}