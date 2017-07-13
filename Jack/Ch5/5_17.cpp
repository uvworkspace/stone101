#include <iostream>
using namespace std;
int main() {
  int input;
  cout << "Please enter an integer:";
  cin >> input;
  if(input = 101)//common mistake
    cout << "one hundred and one\n";
  cout << "You entered " << input << '\n';
}
