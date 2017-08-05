#include <iostream>
using namespace std;
void pr1(int n) {
  int cnt = 0;
  while (cnt <= n) {
    cout << cnt++ << " ";
  }
  cout << endl;
}
void pr2(int n) {
  int cnt = n;
  while (cnt >= 0) {
    cout << cnt-- << " ";
  }
  cout << endl;
}
int main() {
  pr1(5);
  pr2(5);
}