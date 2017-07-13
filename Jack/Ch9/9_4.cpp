#include <iostream>
using namespace std;
int prompt(){
  int input;
  cout << "Please enter an integer to sum:\n";
  cin >> input;
  return input;
}
int main(){
  int n1, n2;
  n1=prompt();
  n2=prompt();
  cout << n1 << " + " << n2 << " = " << n1+n2;
}