#include <iostream>
using namespace std;
int main() {
  int input=1, sum=0; 
  cout << "Enter positive integers to sum, other number will show the result : ";
  while (input > 0){
    cin >> input;
    if(input > 0)
      sum += input; 
  }
  //show result!!
  cout << "Sum = " << sum << '\n';
}
