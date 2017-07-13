#include <iostream>
#include <cmath>
using namespace std;

/*int binToInt(string bin) {
  // to be implemented
  
  for (int i=0; i<bin.length(); i++) {
    bin[i] = 
  }
  
}*/

/*int binToInt2(string bin) {
  // to be implemented
  int sum = 0;
  int count = 0;
  for (int i=bin.length()-1; i>=0; i--) {
    if (bin[i] == '0') {
      count++; 
    }
    if (bin[i] == '1') {
      sum = sum + pow(2, count);
      count++;
    }
  }
  return sum;
}*/

int binToInt3(string bin) {
  int sum = 0;
  int p = 1;
  for (int i=bin.length()-1; i>=0; i--) {
    if (bin[i] == '1') sum = sum + p;
    p *= 2;
  }
  return sum;
}

int main() {
  int num = binToInt3("101010111100");
  cout << num << endl;
  num = binToInt3("1110111100");
  cout << num << endl;
}