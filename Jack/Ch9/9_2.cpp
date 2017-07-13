#include <iostream>
using namespace std;
void prompt() {
  cout << "Please enter an integer to sum: \n";
}
int main(){
  int n1, n2;
  prompt();
  cin >> n1;
  prompt(); 
  cin >> n2;
  cout << n1 << " + " << n2 << " = " << n1 + n2 ;
}