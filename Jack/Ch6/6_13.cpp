#include <iostream>
using namespace std;
int main(){
  int input, sum = 0;
  cout << "Enter positive integers to sum, negative integers to show the result:";
  while(true){
    cin >> input;
    if (input <= 0)
      break; 
    sum += input;
  }
  cout << "Sum = " << sum << '\n';
}
