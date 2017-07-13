#include <iostream>
#include <vector>
using namespace std;
int main(){
  int sum = 0;
  const int MAX_INPUT = 7;
  vector<int> input(MAX_INPUT);
  cout << "Please enter " << MAX_INPUT << " integers: ";
  for (int i = 0; i < MAX_INPUT; i++) {
    cin >> input[i];
    sum += input[i];
  }
  cout << "The sum of {";
  for (int i = 0; i < MAX_INPUT - 1; i++)
    cout << input[i] << ", ";
  cout << input[MAX_INPUT-1] << "} is " << sum;
} 