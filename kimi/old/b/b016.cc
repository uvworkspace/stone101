#include <iostream>  
#include <string>  
#include <math.h>  
using namespace std;
int change(char m) {
  if (m=='0') {
    return 0;
  } else if (m=='1') {
    return 1;
  } else if (m=='2') {
    return 2;
  } else if (m=='3') {
    return 3;
  } else if (m=='4') {
    return 4;
  } else if (m=='5') {
    return 5;
  } else if (m=='7') {
    return 7;
  } else if (m=='6') {
    return 6;
  } else if (m=='9') {
    return 9;
  } else if (m=='8') {
    return 8;
  }
  return 10;
}
int main() {
  string a,b;
  cin >> a;
  cin >> b;
  int smaller,bigger;
  if (a.length()<b.length()) {
    string c=a;
    a=b;
    b=c;
  }
  bigger=a.length();
  smaller=b.length();
  int c[bigger];
  for (int m=0;m<bigger;++m) {
    c[m]=0;
  }
  for (int i=0;i<smaller;++i) {
    c[bigger-smaller+i]=change(a[bigger-smaller+i])+change(b[i]);
  } for (int j=0;j<bigger-smaller;++j) {
    c[j]=change(a[j]);
  } for (int k=bigger-1;k>0;--k) {
    if (c[k]>=10) {
      c[k-1]=c[k-1]+1;
      c[k]=c[k]%10;
    }
  }
  for (int l=0;l<bigger;++l) {
    cout << c[l];
  }
  cout << endl;
}
