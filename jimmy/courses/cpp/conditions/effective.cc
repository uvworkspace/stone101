#include <iostream>
using namespace std;

void test() {
  bool A = false;
  bool B = true;
  bool C = true;
  if (!(A || B || C) == /* code */ true) 
    cout << true << endl;
  else 
    cout << false << endl;

  if (!(A && !(B || C)) == /* code */ true) 
    cout << true << endl;
  else 
    cout << false << endl;

  if (!(!(A && B) && C) == /* code */ true) 
    cout << true << endl;
  else 
    cout << false << endl;
}

int main() {
  test();
  return 0;
}
