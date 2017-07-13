#include <iostream>
using namespace std;
int main(){
  int x = 9;
  int y = x;
  int& z = x;
  cout << "x = " << x << '\n';
  cout << "y = " << y << '\n';
  cout << "z = " << z << '\n';
  cout << "Assign 5 to x\n";
  x = 5;
  cout << "x = " << x << '\n';
  cout << "y = " << y << '\n';
  cout << "z = " << z << '\n';
  cout << "Assign 3 to y\n";
  y = 3;
  cout << "x = " << x << '\n';
  cout << "y = " << y << '\n';
  cout << "z = " << z << '\n';
  cout << "Assign 101 to z\n";
  z = 101;
  cout << "x = " << x << '\n';
  cout << "y = " << y << '\n';
  cout << "z = " << z << '\n';
}