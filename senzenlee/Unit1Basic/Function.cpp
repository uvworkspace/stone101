#include <iostream>
using namespace std;
int add (int a, int b) {
  return a + b;
}
int main () {
  int a = 1;
  int b = 2;
  int x = add(a, b);
  cout << x << endl;
}