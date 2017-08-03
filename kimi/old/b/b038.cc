#include <iostream>  
#include <string>  
#include <math.h> 
#include <algorithm>
using namespace std;

bool OK(int arr[],int len) {
  int aa=0,aa1=1,t1=0,t2=1;
  for (int i=0;i<len;++i) {
    aa+=arr[i];
    aa1*=arr[i];
    t1+=i;
    t2*=i;
  }
  if (aa==t1 and aa1==t2) {
    return true;
  }
  return false;
}
int next(int arr[],int len,int max) {
  int now=len-1;
  while (arr[now]==max) {
    arr[now]=1;
    now-=1;
    if (now<0) {
      return 0;
    }
  }
  arr[now]+=1;
  if (OK(arr,len)) {
    for (int i=0;i<len;++i) {
      cout << arr[i];
    }
    cout << endl;
  }
  next(arr,len,max);
}
int main () {
  int m,n;
  cin >> n;
  int aa[n];
  for (int i=0;i<n;++i) {
    aa[i]=1;
  }
  cout << endl;
  next(aa,n,n);
}