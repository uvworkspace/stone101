#include <iostream>
using namespace std;

int main() {
  int x = 4;
  cout << &x << endl;
  
  int *y = &x;
  cout << y << endl;
  cout << *y << endl;
  
  *y = 99;
  cout << *y << endl;
  cout << x << endl;
  
  x = 66;
  cout << *y << endl;
  cout << x << endl;
  

  
  // references
  cout << "--- reference ---" << endl;
  int a = 3;
  int &b = a;
  
  cout << "a: " << a << " b: " << b << endl;
  b = 8;
  cout << "a: " << a << " b: " << b << endl;
}