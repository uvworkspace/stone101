#include <iostream>
#include <limits>
using namespace std;

int main() {
  int imin = numeric_limits<int>::min();
  int imax = numeric_limits<int>::max();
  cout << "int min: " << imin << " max: " << imax << endl;

  long llmin = numeric_limits<long>::min();
  long llmax = numeric_limits<long>::max();
  cout << "long min: " << llmin << " max: " << llmax << endl;
  
  char a = '8';
  int x = '8' - '0';
  char b = (char)('0' + 5);
  cout << "a: " << a << " x: " << x << " b: " << b << endl;
}