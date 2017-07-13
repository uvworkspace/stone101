#include <iostream>
using namespace std;
int main(){
  int input, sum = 0;
  bool finished = false;
  while(!finished){
    cout << "Enter positive integer to sum, enter 0 to show the result:\n";
    cin >> input;
    if(input < 0){
      cout << "Negative value " << input << " skipped\n";
      continue; 
    }
    if(input >0){
      cout << "add " << input << " to sum\n";
      sum += input;
    }
    else
      finished = true;
  }
  cout << "sum = " << sum << '\n';
} 