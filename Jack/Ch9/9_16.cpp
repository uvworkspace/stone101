#include <iostream>
using namespace std;
double square_root(double input){
  double d,root = 1;
  do{ 
    root = (root + input/root) / 2;
    cout << "the root is " << root << '\n';
    d = root * root - input;
  }while (d > 0.0001 || d < -0.0001);
  return root;
}
int main(){
  double input;
  cout << "Enter a floating-point to compute its square_root:\n";
  cin >> input;
  cout << "Square root of " << input << " is "<< square_root(input);
}