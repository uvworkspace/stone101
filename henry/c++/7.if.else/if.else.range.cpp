#include <iostream>
using namespace std;

int check(int x, int a, int b) {
  if ((a < x && x < b) || (b < x && x < a)) {
    return true;
  } 
  else {
    return false;
  } 
}

int main() {
  int cnt;
  cin >> cnt;
  for (int i=0; i<cnt; i++) {
    int x, a, b;
    cin >> x >> a >> b;
    cout << check(x, a, b) << endl;
  }
}