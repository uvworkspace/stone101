#include <iostream>
using namespace std;
int get_value_in_range(int first, int last){
  //Swap
  if(first > last){
    int temp = first;
    first = last;
    last = temp;
  }
  cout << "Please enter a value in the range " << first << "..." << last << ": ";
  int input; 
  bool is_invalid;
  do{
    cin >> input;
    is_invalid = (input < first || input > last);
    if(is_invalid){
      cout << input << " is not in the range "
      << first << "..." << last << '\n';
      cout << "Please try again: ";
    }
  }while (is_invalid);
  return input;
}
int main(){
  cout << get_value_in_range(101, 200) << '\n';
  cout << get_value_in_range(200, 101) << '\n';
  cout << get_value_in_range(-101, -200) << '\n';
  cout << get_value_in_range(-200, -101) << '\n';
}
