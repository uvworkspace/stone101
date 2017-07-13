#include <iostream>  
#include <string>  
#include <math.h>  
using namespace std;

int gcd1 (int m,int n) {
  if (m%n==0) {
    return n;
  } else if (n%m==0) {
    return m;
  } else if (m>n) {
    return gcd1(m%n,n);
  } else if (n>m) {
    return gcd1(m,n%m);
  }
}

int gcd2(int m,int n) {
  if (n>m) {
    int p=m;
    m=n;
    n=p;
  }
  while (m%n!=0) {
    int p=m;
    m=n;
    n=p%n;
  }
  return n;
}
int main () {
  int m,n;
  cin >> m >> n;
  cout << gcd1(m,n) << endl;
  cout << gcd2(m,n) << endl;
}