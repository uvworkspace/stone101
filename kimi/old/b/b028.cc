#include <iostream>  
#include <string>  
#include <math.h> 
using namespace std;

int main () {
  int n;
  cin >> n;
  int a[n+1],min[6]={1,5,10,12,16,20};
  a[0]=0;
  for (int j=1;j<=n;++j) {
    int small=1000;
    for (int k=0;k<6;++k) {
      if (min[k]<=j) {
        if (small>a[j-min[k]]+1) {
          small=a[j-min[k]]+1;
        }
      }
    }
    a[j]=small;
  }
  cout << a[n] << endl;
}