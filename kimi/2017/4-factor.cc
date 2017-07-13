#include <iostream>  
#include <string>  
#include <math.h>  
using namespace std;
int factor (long n) {
  for (long i=2;i<=sqrt(n);++i) {
    if (n%i==0) {
      long a=0; 
      while (n%i==0) {
        ++a;
        n=n/i;
      } 
      cout << i << "^" << a;
      if (n!=1) {
        cout << "*";
      }
    }
  }
  if (n!=1) {
    cout << n << "^1" << endl;
  }
}
int main () {
  int n;
  cin >> n;
  factor(n);
}