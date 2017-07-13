#include <iostream>
using namespace std;
int main(){
  int n;
  do{
    cout << "Please enter an integer in the range 0-100: ";
    cin >> n;
  }while(n < 0 || n > 100);
  cout << "Legal value: " << n;
}