#include <iostream>
using namespace std;

void line(int n, string ch) {
  for (int i = 1; i <= n; i++) {
    cout << ch;
  }
}

void triangle(int n) {
  int i = 1;
  while (i <= n) {
    for(int j = 1; j <= 3; j++) {
    line(n-i, " ");
    line(i, "*");
    }
    cout << endl;
    i++;
  }
}

int main() {
  triangle(6);
  return 0;
}