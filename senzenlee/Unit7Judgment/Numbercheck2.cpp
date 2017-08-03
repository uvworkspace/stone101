#include <iostream>
using namespace std;
bool check(int x, int a, int b) {
  if (x <= a && x >=b || x >= a && x <= b) 
    return true;
  else 
    return false;
}

int main() {
  int x, a, b;
  while (cin >> x >> a >> b) {
    cout << check(x, a, b) << endl;
  }
}