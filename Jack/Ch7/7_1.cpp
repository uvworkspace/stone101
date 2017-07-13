#include <iostream>
using namespace  std;
int main(){
  int n;
  cout << "Please enter an integer in the range 0...5: ";
  cin >> n;
  switch(n){
    case 0:
      cout << "zero";
      break;
    case 1:
      cout << "one";
      break;
    case 2:
      cout << "two";
      break;
    case 3:
      cout << "three";
      break;
    case 4:
      cout << "four";
      break;
    case 5: 
      cout << "five";
      break;
    default:
      if (n < 0)
        cout << "too small!!";
      else
        cout << "too large!!";
      break;
  }
}   