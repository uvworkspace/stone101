#include <iostream>
using namespace std;

double c2f(double c)
{
  double a = c * 9 / 5;
  return a + 32;
}

double f2c(double f)
{
  double b = 5 * (f - 32);
  return b / 9;
}

int main() {
  double a, b;
  cin >> a >> b;
  cout << c2f(a) << endl;
  cout << f2c(b) << endl;
}