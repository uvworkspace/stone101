#include <iostream>
using namespace std;

void fibo (int n) {
  int a = 1;
  int b = 1;
  cout << a << " ";
  cout << b << " ";
  for (int i = 3; i <= n; i++) {
    int k = a + b;
    cout << k << " ";
    a = b;
    b = k;
  }
}

void fibo2(int n) {
  int a = 1;
  int b = 1;
  cout << a;
  cout << b;
  for (int i=3; i<n; i++) {
    int k = a + b;
    cout << k;
    // a = 
    // b = 
  }
}

int main() {
  fibo(10);
  return 0;
}