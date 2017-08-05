#include <iostream>
using namespace std;
void loop(int n) {
  int num = 0;
  for (int i = 1; i <= n; i++) {
    cout << num <<" ";
    num += 2 * i;
  }
  cout << endl;
}
int main() {
  loop(8);
  loop(6);
}