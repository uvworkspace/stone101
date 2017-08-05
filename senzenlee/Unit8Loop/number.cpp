#include <iostream>
using namespace std;
void sumN(int n) {
  int total = 0;
  for (int i =0; i <= n; i++) {
    total += i;
  }
  cout << total << endl;
}
void sumEvens(int x) {
  int total = 0;
  for (int i = 2; i / 2 <= x; i += 2) {
    total += i;
  }
  cout << total << endl;
}
void multiple(int n) {
  int total = 1;
  for (int i = 1; i <= n; i++) {
    total *= i;
  }
  cout << total << endl;
}
int main() {
  sumN(10);
  sumEvens(10);
  multiple(10);
}