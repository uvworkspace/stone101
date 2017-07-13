#include <iostream>
#include <cmath>
using namespace std;

void factor(int n) {
  int rem = n, i = 2;
  while (i*i < n) {
    int cnt = 0;
    while (rem % i == 0) {
      cnt++;
      rem = rem / i;
    }
    if (cnt > 0) {
      cout << i << "^" << cnt;
    }
    i++;
  }
  if (rem > 1) {
    cout << rem << "^1" << endl;
  }
}

int main() {
  int n;
  while (cin >> n) {
    factor(n);
  }
}