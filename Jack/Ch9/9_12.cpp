/*
use the different compiler, maybe you will get the different result.
try this code on the DevC++.
*/
#include <iostream>
using namespace std;
int main(){
  double x,y;
  cout << "Please enter two floating-point whose sum is equall to 1.0\n"
  << "Example: 0.9  0.1\n";
  cin >> x >> y;
  if (x+y == 1.0)
    cout << "Ok, the result is right";
  else
    cout << "No, the result is not right";
}
