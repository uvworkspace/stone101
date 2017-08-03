#include <iostream>  
#include <string>  
#include <math.h> 
#include <algorithm>
using namespace std;
int aaa=0;
int change(int arr[],int len) {
  if (len==1) {
    return aaa;
  } else {
    int arr2[len-1];
    arr2[0]=arr[0]+arr[1];
    aaa+=arr2[0];
    for (int i=1;i<len-1;++i) {
      arr2[i]=arr[i+1];
    }
  sort(arr2,arr2+len-1);
  change(arr2,len-1);
  }
}

int main () {
  int n;
  cin >> n;
  int a[n];
  for (int i=0;i<n;++i) {
    cin >> a[i];
  }
  sort(a,a+n);
  cout << change(a,n) << endl;
}