#include <iostream>
using namespace std;

void line(int n) {
  string str = "*";
  for (int i = 1; i <= n; i++) {
    cout << str;
  }
  cout << endl;
}

void triangle(int n) {
  int i = 1;
  while (i <= n) {
    line(i);
    i++;
  }
}

int main() {
  triangle(6);
  return 0;
}