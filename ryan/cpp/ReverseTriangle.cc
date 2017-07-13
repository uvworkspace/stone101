#include <iostream>
using namespace std;

void line(int n, string ch) {
 for (int i = n; i >= 1; i--) {
   cout << ch;
 }
}

void reverseTriangle(int n) {
  // use line function to finish this
  int i = n;
  while (i > 0) {
    line(n-i, " ");
    line(i, "*");
    cout << endl;
    i--;
  }
}

void reverseTriangle2(int n) {
  int i = n;
  while (i > 0) {
    line(n-i, " ");
    line(i, "*");
    cout << endl;
    i--;
  }
}

int main() {
  reverseTriangle(5);
  return 0;
}