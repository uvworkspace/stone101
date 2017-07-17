#include <iostream>  
#include <string>
#include <math.h>
using namespace std;

int times (int a[],int len,int n) {
  for (int i=0;i<len;++i) {
    a[i]=a[i]*n;
  } for (int j=0;j<len-1;++j) {
    a[j+1]=a[j+1]+(a[j]-a[j]%10)/10;
    a[j]=a[j]%10;
  } while (a[len-1]>=10) {
    a[len]=(a[len-1]-a[len-1]%10)/10;
    a[len-1]=a[len-1]%10;
    len=len+1;
  }
  return len;
}
int main () {
  int a[10000],len=1,n;
  a[0]=1;
  cin >> n;
  for (int i=2;i<=n;++i) {
    len=times(a,len,i);
  }
  for (int j=len-1;j>=0;--j) {
    cout << a[j];
  }
  cout << endl;
}