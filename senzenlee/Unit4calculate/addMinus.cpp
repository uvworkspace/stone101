#include <iostream>
using namespace std;

void test() {
  int x = 9;
  // output x++ < 10
  cout << (x++ < 10) << endl;

  x = 9;
  // output ++x < 10
  cout << (++x < 10) << endl;

}

int main() {
  test();
  return 0;
}