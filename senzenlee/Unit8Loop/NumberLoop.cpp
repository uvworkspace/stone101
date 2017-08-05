#include <iostream>
using namespace std;
void ascending(int n) {
  for (int i = 0; i <= n; i++) {
    cout << i << " ";
  }
  cout << endl;
}  
void evenN(int x) {
  for (int i = 0; i <= x / 2; i++) {
    cout << i * 2 << " ";
  }
  cout << endl;
}
void descending(int n) {
  for (int i = n; i >= 0; i--) {
    cout << i << " ";
  }
  cout << endl;
}
void minusFive(int x) {
  int count = 1;
  for (int i = 100; count <= x; i -= 5) {
    cout << i << " ";
    count += 1;
  }
  cout << endl;
}
int main() {
  ascending(10); // 0 1 2 3 4 5 6 7 8 9 10
  evenN(10); // 0 2 4 6 8 10
  descending(10); // 10 9 8 7 6 5 4 3 2 1 0
  minusFive(10); // 100 95 90 85 80 75 70 65 60 55
  return 0;
}