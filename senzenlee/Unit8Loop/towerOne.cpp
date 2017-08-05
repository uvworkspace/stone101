#include <iostream>
using namespace std;
void towerOne(int n) {
  string one = "1";
  for (int i = 1; i <= n; i++) {
    cout << one;
    cout << endl;
    one += "1";
  }
}
int main() {
  towerOne(3);
  towerOne(5);
}