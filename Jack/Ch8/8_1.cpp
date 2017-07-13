#include <iostream>
using namespace std;
int main(){
  double input,d,root=1;
  cout << "Enter a number: ";
  cin >> input;
  do{ 
    root = (root+input/root) / 2;
    cout << "the root is " << root << '\n';
    d = root * root - input; 
  }while(d > 0.0001 || d < -0.0001);
  cout << "Square root of " << input << " is " << root;
}