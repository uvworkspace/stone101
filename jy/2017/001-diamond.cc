#include <iostream>
using namespace std;

int max(int x, int y) {
  return x >= y ? x : y;
}
void line(int n, char ch) {
  for (int i=0; i<n; i++) {
    cout << ch;
  }
}
void diamond(int n) {
  for (int i=0; i<n; i++) {
    line(n-i-1, '.');
    cout << '*';
    if (i>0) {
      line(i*2-1, '.');
      cout << '*';
    }
    cout << endl;
  }
  for (int i=n-2; i>=0; i--) {
    line(n-i-1, '.');
    cout << '*';
    if (i>0) {
      line(i*2-1, '.');
      cout << '*';
    }
    cout << endl;
  }
}

int main() {
  int n;
  while (cin >> n) {
    diamond(n);
  }
  return 0;
}