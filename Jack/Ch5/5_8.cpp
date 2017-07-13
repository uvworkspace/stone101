#include <iostream>
using namespace std;
int main() {
   int value;
   cout << "Please enter an integer value in the range 0...10: ";
   cin >> value;
   if(value >= 0)
      if(value <= 10) 
         cout << value << " it is in legal range\n";
      else
         cout << value << " is too large\n";
   else
      cout << value << " is too small\n";
   cout << "finished\n";
}