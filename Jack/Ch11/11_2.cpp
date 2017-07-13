#include <iostream>
using namespace std;
int main(){
  int sum = 0, input;
  const int MAX_INPUT = 7;
  cout << "Please enter " << MAX_INPUT << " integers:\n";
  for(int i = 0; i < MAX_INPUT; i++){
    cin >> input;
    sum += input;
  }
  cout << "The sum of the values above is " << sum;
}
