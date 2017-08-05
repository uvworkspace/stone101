#include <iostream>  
#include <string>  
#include <math.h>  
#include <algorithm>
using namespace std;

int main () {
  int m1,n1,m2,n2,m,n,x;
  cin >> m1 >> n1 >> m2 >> n2;
  if (n2>n1) {
    m=m2-m1;
    n=n2-n1;
  } else {
    m=m2-m1-1;
    n=60-n1+n2;
  }
  if (m==0){
    if (n>30) {
      x=30;
    }
    else {
      x=0;
    }
  }
  else {
    x=30*(m+1);
  }
  if (x>210) {
    x=210;
  }
  cout << x << endl;
}