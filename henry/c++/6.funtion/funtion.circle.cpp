#include <iostream>
using namespace std;

const double PI = 3.14;

double circle(double r) {
  return r * r * PI;
}

double outer(double r1, double r2) {
  return circle(r1) - circle(r2); 
}

int main() {
  double a, b, c;
  cin >> a >> b >> c;
  cout << circle(a) << endl;
  cout << outer(b, c) << endl;
}