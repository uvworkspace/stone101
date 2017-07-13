#include <iostream>
#include <cmath>
using namespace std;
int main() {
  double n1 = 256.0,n2;
  
  cout << sqrt(256.0) << "  //print the result of function by passing value\n";
  
  cout << sqrt(n1) << "  //print the result of function by passing variable\n";
  
  cout << sqrt(7 * n1 - 123) << "  //print the result of function by passing expression\n";
  
  n2 = sqrt(n1); 
  cout << n2 << "  //assign the result of function to variable\n";
  
  n2 = 9 * sqrt( n1*3.14) + 98; 
  cout << n2 << "  //use the result of function in expression\n";
  
  n2 = sqrt(sqrt(1024.0)); 
  cout << n2 << "  //function passing by the result of function\n";
}