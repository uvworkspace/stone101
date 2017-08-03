#include <iostream>
using namespace std;

const double PI = 3.14;
double power2(double x) {
  return x * x;
}

double circle(double x) {
  return power2(x)*PI;
}

double square(double x) {
  return power2(x);
}

int main() {
  double x;
  cin >> x;
  cout << power2(x) << endl;
  cout << circle(x) << endl;
  cout << square(x) << endl;
}