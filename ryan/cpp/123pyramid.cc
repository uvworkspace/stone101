#include <iostream>
using namespace std;

int tower(int n) {
  int i = 1;
  int sum = 1;
  while (i <= n) {
    sum = 1;
    for (int j = 1; j <= i; j++) {
      cout << sum++;
    }
    cout << endl;
    i++;
  }
}

int tower2(int n) {
  int i = 1;
  int sum = 1;
  while (i <= n) {
    sum = 1;
    for (int j = 1; j <= i; j++) {
      cout << sum++;
    }
    cout << endl;
    i++;
  }
}

int step (int n) {
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
      cout << tower(3) << endl;
      tower2(3);
      cout << step(5) << endl;
      return 0;
}

// I can see your code.