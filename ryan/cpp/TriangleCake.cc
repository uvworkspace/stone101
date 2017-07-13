#include <iostream>
using namespace std;

void line(int n, string ch, bool newLine) {
  for (int i = 1; i <= n; i++) {
    cout << ch;
  }
  if (newLine == true) cout << endl;
}

void triangle(int n) {
  int i = 3;
  line(1, "*", true);
  line(2, "*", true);
  while (i < n) {
    cout << "*";
    line(i-2, "-", false);
    cout << "*";
    cout << endl;
    i++;
  }
  line(n, "*", true);
}

int main() {
  triangle(8);
}