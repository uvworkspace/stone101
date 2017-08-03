#include <iostream>
using namespace std;

int roundPositive(double x) {
  return (int)(x + 0.5);
}

int roundNegative(double x) {
  return (int)(x - 0.5);
}

int  main() {
  double x = roundPositive(3.14);
  cout << x << endl;
  x = roundPositive(3.5);
  cout << x << endl;
  x = roundNegative(-3.14);
  cout << x << endl;
  x = roundNegative(-3.5);
  cout << x << endl;
  return 0;
}