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
};
char menu(){
  char choice;
  cout << "=== A)dd S)ubtract P)rint H)elp E)xit ===\n";
  cin >> choice;
  return choice;
};
int result = 0, x, y;
void getInput(){
  cin>>x>>y;
};
void show(){
  cout<< "The result is " << result << endl;
};
void add_to_result(int x, int y){
  result = x+y;
};
void subtract_to_result(int x, int y){
  result = x-y;
};
int main(){
  bool done = false; 
  do {
    switch (menu()) {
      case 'A': 
      case 'a':
        getInput();
        add_to_result(x, y);
        show();
        break;
      case 'S': 
      case 's':
        getInput();
        subtract_to_result(x, y);
      case 'P': 
      case 'p':
        show();
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