#include <iostream>
using namespace std;

int A = 2, B = 3;

int func1(int x, int y) {
  int a = x*x;
  int b = y*y;
  return a + b;
}

int func2() {
  int a = A*A;
  int b = B*B;
  return a + b;
}


int main() {
  cout << func1(2, 3) << endl;
  cout << func2() << endl;
  
  if (10 < 100) {
    int d = 10;
    cout << d << endl;
  }

  for (int i=0; i<10; i++) {
    int e = 20;
    cout << e << endl;
  }
}