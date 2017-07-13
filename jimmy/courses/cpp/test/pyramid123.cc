#include <iostream>
using namespace std;

int tower (int n) {
  int sum = 1;
  int i = 1;
  while (i <= n) {
    for (int j = 1; j <= i; j++) {
         cout << sum;
    }
    cout << endl;
    sum++;
    i++;
  }
}

int main() {
  tower(5);
  return 0;
}