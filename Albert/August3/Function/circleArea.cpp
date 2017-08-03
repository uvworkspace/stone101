#include <iostream>
using namespace std;

const double PI = 3.14;

double circle(double r)
{
  return r * r * PI;
}

double outer(double r1, double r2)
{
  if (r1 > r2)
  {
    double a = r1 * r1 * PI;
    double b = r2 * r2 * PI;
    return a - b;
  }
  else
  {
    double c = r1 * r1 * PI;
    double d = r2 * r2 * PI;
    return d - c;
  }
}

int main() {
  double a, b, c;
  cin >> a >> b >> c;
  cout << circle(a) << endl;
  cout << outer(b, c) << endl;
}