#include <iostream>
using namespace std;

int add(int x, int y)
{
  return x + y;
}

int times(int x, int y)
{
  return x * y;
}

int result(int x, int y, int z)
{
  int a = add(x, y);
  int b = times(a, z);
  return b;
}

int main() {
  double x, y, z;
  cin >> x >> y;
  cout << add(x, y) << endl;
  cin >> x >> y;
  cout << times(x, y) << endl;
  cin >> x >> y >> z;
  cout << result(x, y, z) << endl;
}