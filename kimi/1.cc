#include <iostream>  
#include <string>  
#include <math.h>  
using namespace std;   
int change (char a) {    
  if (a=='0') {    
    return 0;    
  } if (a=='1') {    
    return 1;    
  } if (a=='2') {    
    return 2;    
  } if (a=='3') {    
    return 3;    
  } if (a=='4') {    
    return 4;    
  } if (a=='5') {    
    return 5;    
  } if (a=='6') {    
    return 6;    
  } if (a=='7') {    
    return 7;    
  } if (a=='8') {    
    return 8;    
  } if (a=='9') {    
    return 9;    
  }    
  return 10;    
}
int reverse(string n) {  
  char a[n.length()];
  for (int i=0;i<n.length();++i) {
    a[n.length()-i]=n[i];
  }
  for (int j=0;j<n.length();++j) {
    return a[j];
  }
}  
int main () {
  //string a,b;
  //cin >> a;
  //cin >> b;
  //int c[a.length()+b.length()];
  //for (int h=0;h<a.length()+b.length();++h) {
    //c[h]=0;
  //}
  //for (int i=0;i<a.length();++i) {
    //for (int j=0;j<b.length();++j) {
      //12
    //}
  //}
  cout << reverse("123456789");
}