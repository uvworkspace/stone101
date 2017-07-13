#include <iostream>
using namespace std;
int main() {
   int value;
   cout << "Please enter an integer value in the range 0...10: ";
   cin >> value;
   if(value >= 0 && value <= 10)
      cout << "it is in legal range\n";
   if(value < 0 || value > 10)
      cout << "it is not in legal range\n";
   cout << "finished\n";
}