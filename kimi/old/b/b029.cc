#include <iostream>  
#include <string>  
#include <math.h> 
using namespace std;

int a[1000];

int m(int n,int t) {
  if (n<0) {
    return 0;
  } else if (n==0) {
    return 1;
  } else if (a[n]>0) {
    return a[n];
  } else {
    if (t==2) {
      return m(n-2,2);
    } else if (t==5) {
      return m(n-2,2)+m(n-5,5);
    } else if (t==10) {
      return m(n-2,2)+m(n-5,5)+m(n-10,10);
    } else if (t==20) {
      return m(n-2,2)+m(n-5,5)+m(n-10,10)+m(n-20,20);
    } else if (t==25) {
      return m(n-2,2)+m(n-5,5)+m(n-10,10)+m(n-20,20)+m(n-25,25);
    }
  }
}

int main () {
  int n;
  cin >> n;
  cout << m(n,25) << endl;
}