#include <iostream>
#include <vector>
using namespace std;
int main(){
  const int MAX_INPUT = 7;
  vector<int> input(MAX_INPUT);
  cout << "Please enter "<< MAX_INPUT << " integers:\n";
  for (int i=0 ; i<MAX_INPUT; i++)
    cout << input.at(i) << " ";
  cout << "\n";
  for (int i=0 ; i<MAX_INPUT; i++)
    input.at(i)=9;
  cout << "\n";
  for (int i=0 ; i<MAX_INPUT; i++)
    cout << input.at(i) << " ";
  cout << "\n";
}