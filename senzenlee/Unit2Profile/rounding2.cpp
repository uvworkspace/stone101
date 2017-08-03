#include <iostream>
using namespace std;

int roundPositive(double x) {
  // to be implemented
  int X ;
  X = x += 0.5;
  return X;
}
int roundNegative(double x) {
  // to be implemented
  int X;
  X = x -= 0.5;
  return X;
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
}