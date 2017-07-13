#include <iostream>
using namespace std;

void test() {
  double num1 = 0.0 / 0.0;
  double num2 = 1.0 / 0.0;
  double num3 = -1.0 / 0.0;
  
  // output variables
  cout << num1 << endl;
  cout << num2 << endl;
  cout << num3 << endl;
}

int main() {
  test();
  return 0;
}