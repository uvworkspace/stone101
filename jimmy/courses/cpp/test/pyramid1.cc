#include <iostream>
using namespace std;

int tower (int n) {
  int i = 1;
  while (i <= n) {
    for (int j = 1; j <= i; j++) {
          cout << 1;
    }
    cout << endl;
    i++;
  }
} 

int main() {
  tower(5);
  return 0;
}

