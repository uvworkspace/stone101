#include <iostream>
using namespace std;

void test() {
  // output results
  double x = 5;
  cout << x / 4 << endl;
  int y = 5;
  x = 4;
  cout << y / x << endl;
  x = 5;
  y = 4;
  cout << (int) x / y << endl;
  cout << (double) x / y << endl;
  int z = 5;
  cout << (double) z / y << endl;

}

int main() {
  test();
  return 0;
}