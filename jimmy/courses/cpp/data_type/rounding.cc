#include <iostream>
using namespace std;

int roundPositive(double x) {
  // to be implemented
  return (int) (x + 0.5);
}

int roundNegative(double x) {
  // to be implemented
  return (int) (x - 0.5);
}

int  main() {
  double x1 = roundPositive(3.14);
  double x2 = roundNegative(-3.14);
  cout << "x1=" << x1 << " x2=" << x2 << endl;
  return 0;
}