#include <iostream>
using namespace std;
void tower(int n) {
  int num = 1;
  for (int i = 2; i <= n + 1; i++) {
    cout << num << endl;
    num = num * 10 + 1;
  }
}
void step(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <=i; j++) {
      cout << i;
    }
    cout << endl;
  }
}
int main() {
  tower(3);
  tower(5);
  step(3);
  step(5);
}