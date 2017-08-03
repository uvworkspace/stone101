#include <iostream>
using namespace std;

void check(int num) {
  int a,b,c,d;
  a = num / 1000;
  b = (num - a * 1000) / 100;
  c = (num - a * 1000 - b * 100) / 10;
  d = num % 10;
  if ((a + b + c) % 7 == d) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
}

int main() {
  int num;
  cin >> num;
  check(num);
  cin >> num;
  check(num);
}