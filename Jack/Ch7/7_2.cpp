#include <iostream>
using namespace std;
int main(){
  int n = -1;
  //insist n must be in the certain range
  while(n<0 || n>100){
    cout << "Please enter an integer in the range 0-100: ";
    cin >> n;
  }
  cout << "Legal value: " << n ;
}