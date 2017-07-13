#include <iostream>
#include <cmath>
using namespace std;
int main() {
  double input,root;
  cout << "Enter number: ";
  cin >> input;
  root = sqrt(input);//use the function in "cmath"
  cout << "Square root of " << input << " is " << root << '\n';
}