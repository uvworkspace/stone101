#include <iostream>  
#include <string>  
#include <math.h>
#include <algorithm>
using namespace std;

int main () {
  int n;
  cin >> n;
  int a[n],b[n];
  b[0]=1;
  for (int i=0;i<n;++i) {cin >> a[i];}
  for (int j=1;j<n;++j) {
    int max=0;
    for (int k=0;k<j;++k) {
      if (a[j]>a[k] && max<b[k]) {
        max=b[k];
      }
    }
    b[j]=max+1;
  }
  int maxx=0;
  for (int l=0;l<n;++l) {
    if (maxx<b[l]) {
      maxx=b[l];
    }
  }
  cout << maxx << endl;
}