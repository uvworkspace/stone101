#include <iostream>  
#include <string>  
#include <math.h> 
#include <algorithm>
using namespace std;

int next(int arr[],int len,int max) {
  int now=len-1;
  while (arr[now]==max) {
    arr[now]=0;
    now-=1;
    if (now<0) {
      return 0;
    }
  }
  arr[now]+=1;
  for (int i=0;i<len;++i) {
    cout << arr[i];
  }
  cout << endl;
  next(arr,len,max);
}

int main () {
  int m,n;
  cin >> n >> m;
  int aa[n];
  for (int i=0;i<n;++i) {
    aa[i]=0;
    cout << '0';
  }
  cout << endl;
  next(aa,n,m);
}