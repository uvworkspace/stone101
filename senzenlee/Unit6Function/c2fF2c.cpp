#include <iostream>
using namespace std;
double c2f(double c) {
  return 32 + c * 9 / 5;
}
double f2c(double f) {
  return (f - 32) * 5 / 9; 
}

int main() {
  double a, b;
  cin >> a >> b;
  cout << c2f(a) << endl;
  cout << f2c(b) << endl;
}