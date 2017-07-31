#include <iostream>  
#include <string>  
#include <math.h> 
using namespace std;
int a[100][100];
bool size(int x,int y,int z) {
  int b=0;
  for (int i=x;i<x+z;++i) {
    for (int j=y;j<y+z;++j) {
      b+=a[i][j];
    }
  }
  if (b==0) {
    return true;
  } else {
    return false;
  }
}

int find (int x,int y,int b) {
  for (int i=1;i<=b;++i) {
    if (!size(x,y,i)) {
      return i-1;
    }
  }
  return b;
}

int small(int a,int b) {
  if (a>b) {
    return b;
  } else {
    return a;
  }
}
int main () {
  int d,b;
  cin >> d >> b;
  for (int i=0;i<d;i++) {
    for (int j=0;j<b;j++) {
      cin >> a[i][j];
    }
  }
  int max=0;
  for (int k=0;k<d;k++) {
    for (int l=0;l<b;l++) {
      int aaa=find(k,l,small(d-k,b-l));
      if (max<aaa) {
        max=aaa;
      }
    }
  }
  cout << max*max << endl;
}