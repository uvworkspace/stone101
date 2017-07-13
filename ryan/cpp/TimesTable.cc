#include <iostream>
using namespace std;

void table (int n) {
  int i = 1;
  while (i <= n) {
    for (int j = 1; j <= n; j++) {
      cout << i << "*" << j << "=" << (i*j) << " ";
    }
    cout << endl;
    i++;
  }
}

int main() {
  table(4);
  return 0;
}