//this is a bad example to show the factors of 1 - 30
//can you find the problem and fix it?
#include <iostream>
using namespace std;
const int LIMIT = 30;
int main() {
  int n=1,factor;
  while (n <= LIMIT){
    factor = 1;
    cout << n << ": ";
    while(factor <= n)
      if(n % factor == 0){
        cout << factor << " ";
        factor++;
      }
    cout << '\n'; 
    n++;
  }
}