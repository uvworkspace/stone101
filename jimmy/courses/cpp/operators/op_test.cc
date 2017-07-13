#include <iostream>
using namespace std;

void test() {
  // output results
  cout << 5.0 / 4 << endl;
  cout << 5 / 4.0 << endl;
  cout << (int) 5.0 / 4 << endl;
  cout << (double) 5.0 / 4 << endl;
  cout << (double) (5 / 4) << endl;
  cout << (int)5.2 % 2 << endl;
}

int main() {
  test();
  return 0;
}