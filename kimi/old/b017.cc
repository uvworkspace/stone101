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
  int c[a.length()+b.length()-1];
  for (int m=0;m<a.length()+b.length()-1;++m) {
    c[m]=0;
  }
  for (int i=0;i<a.length();++i) {
    for (int j=0;j<b.length();++j) {
      c[a.length()+b.length()-i-j-2]=c[a.length()+b.length()-i-j-2]+change(a[i])*change(b[j]);
    }
  } for (int k=0;k<a.length()+b.length()-2;++k) {
    c[k+1]=c[k+1]+(c[k]-c[k]%10)/10;
    c[k]=c[k]%10;
  }
  for (int l=a.length()+b.length()-2;l>=0;--l) {
    cout << c[l];
  }
  cout << endl;
}
