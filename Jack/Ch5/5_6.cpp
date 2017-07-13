#include <iostream>
using namespace std;
int main(){
   int value;
   cout << "Please enter an integer value in the range 0...10: ";
   cin >> value;
   if(value >= 0) // First check
      if(value <= 10) // Second check
         cout << "it is in legal range\n";
   if(value < 0)
      cout << "too small!\n";
   if(value > 10)
      cout << "too large\n";
   cout << "finished\n";
}