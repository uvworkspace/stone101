#include <iostream>  
#include <string>  
#include <math.h> 
using namespace std;

int main () {
  int n,m;
  cin >> n >> m;
  int a[m+1],score[n],min[n];
  for (int i=0;i<n;++i) {
    cin >> min[i] >> score[i];
  }
  a[0]=0;
  for (int j=1;j<=m;++j) {
    int max=0;
    for (int k=0;k<n;++k) {
      if (min[k]<=j) {
        if (max<a[j-min[k]]+score[k]) {
          max=a[j-min[k]]+score[k];
        }
      }
    }
    a[j]=max;
  }
  cout << a[m] << endl;
}