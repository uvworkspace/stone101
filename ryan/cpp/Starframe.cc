#include <iostream>
using namespace std;

void line(int n) {
  string str = "*";
  for (int i = 1; i <= n; i++) {
    cout << str;
  }
  cout << endl;
}

void frame(int w, int h) {
  int i = 1;
  while (i <= h) {
    if (i == 1 || i == h) {
      line(w);
    }
    else {
      cout << "*";
      for (int j = 2; j < w; j++) {
        cout << " ";
      }
      cout << "*" << endl;
    }
    i++;
  }
}

int main() {
  frame(4,6);
  return 0;
}