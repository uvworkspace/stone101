#include <iostream>
using namespace std;
int main() {
  int input, sum = 0;
  cout << "Enter integers to sum, enter any other letters to show the result:\n";
  while (cin >> input)
    sum += input;
  cout << "Sum = " << sum << '\n';
}