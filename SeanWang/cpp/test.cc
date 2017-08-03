#include <iostream>
using namespace std;

void prRect(int m, int n) {
  for (m; m > 0; m--) {
    for (n; n > 0; n--) {
      cout << "*";
    }
    cout << "hi" << endl;
  }
}

int main() {
  prRect(3, 7);
  return 0;
}