#include <iostream>  
#include <string>  
#include <math.h>
using namespace std;

int smaller(int a[],int n,int len) {
  int s=a[n];
  int s_p=n;
  for (int i=n+1;i<len;++i) {
    if (a[i]<s) {
      s=a[i];
      s_p=i;
    }
  }
  return s_p;
}

void exchange(int a[],int c_1,int c_2) {
  int aaa=a[c_1];
  a[c_1]=a[c_2];
  a[c_2]=aaa;
}

int main () {
  int N,a[100];
  cin >> N;
  for (int i=0;i<N;++i) {
    cin >> a[i];
  }
  for (int j=0;j<N;++j) {
    exchange(a,smaller(a,j,N),j);
  }
  for (int k=N-1;k>=0;--k) {
    cout << a[k] << " ";
  }
}