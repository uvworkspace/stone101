#include <iostream>
#include <cmath>
using namespace std;
void helpscreen(){
  cout << "Add: Enter two integers to sum\n";
  cout << " Example: A 100 1\n";
  cout << "Subtract: Enter two integers to substract\n";
  cout << " Example: S 102 1\n";
  cout << "Print: Show the result of the latest operation\n";
  cout << " Example: P\n";
  cout << "Help: Show this help screen\n";
  cout << " Example: H\n";
  cout << "Exit: Exits the program\n";
  cout << " Example: E\n";
}
char menu(){
  char choice;
  cout << "=== A)dd S)ubtract P)rint H)elp E)xit ===\n";
  cin >> choice;
  return choice;
}
int main(){
  int result = 0, x, y;
  bool done = false; 
  do {
    switch (menu()) {
      case 'A': 
      case 'a':
        cin >> x >> y;
        result = x + y;
        cout << result << '\n';
        break;
      case 'S': 
      case 's':
        cin >> x >> y;
        result = x - y;
      case 'P': 
      case 'p':
        cout << "The result is " << result << '\n';
        break;
      case 'H':
      case 'h':
        helpscreen();
        break;
      case 'E': 
      case 'e':
        done = true;
        break;
    }
  }while(!done);
} 