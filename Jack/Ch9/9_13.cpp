#include <iostream>
using namespace std;
int main(){
  char ch;
  for (double i = 0.0; i != 1.0; i += 0.1){
    cout << "i = "  << i << "   Enter any key to continue...\n";
    cin>>(ch);//use it to realize the pause function
  }
}