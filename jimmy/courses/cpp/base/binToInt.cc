#include <iostream>
using namespace std;

int binToInt(string bin) {
  int sum = 0;
  for (int i=0; i<bin.length(); i++) {
    int num = bin[i] - '0';
    sum = sum*2 + num;
  }
  return sum;
}


int main() {
  int num = binToInt("101010111100");
  cout << num << endl;
  num = binToInt("1110111100");
  cout << num << endl;
}