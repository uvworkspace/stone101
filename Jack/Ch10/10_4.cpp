#include <iostream>
using namespace std;
int prompt(){
  static int count = 0;
  int n;
  cout << "Please enter the #" << ++count << " integer to sum: ";
  cin >> n;
  return n;
}
int main(){
  int n1, n2, sum;
  n1 = prompt();
  n2 = prompt();
  sum = n1 + n2;
  cout << n1 << " + " << n2 << " = " << sum;
}