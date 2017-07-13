#include <iostream>
using namespace std;
int main() {
  int value;
  cout << "Please enter an integer in the range 10...15: ";
  cin >> value;
  if(value < 10)
    cout << "too small!!";
  else if (value == 10)
    cout << "ten";
  else if (value == 11)
    cout << "eleven";
  else if (value == 12)
    cout << "twelve";
  else if (value == 13)
    cout << "thirteen";
  else if (value == 14)
    cout << "fourteen";
  else if (value == 15)
    cout << "fifteen";
  else
    cout << "too large!!";
}