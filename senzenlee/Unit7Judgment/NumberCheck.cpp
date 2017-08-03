#include <iostream>
using namespace std;
void check(int num) {
  int a, b, c, d;
  d = num % 10;
  c = num / 10 % 10;
  b = num / 100 % 10;
  a = num / 1000;
  if ((a + b + c) % 7 == d) 
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}

int main() {
  int num;
  cin >> num;
  check(num);
  cin >> num;
  check(num);
}