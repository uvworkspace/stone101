#include <iostream>  
#include <string>  
#include <math.h>  
using namespace std;  
// URL     :  http://www.tcgs.tc.edu.tw:1218/ShowProblem?problemid=b012
int roma(char d) {  
  if (d=='I'){  
    return 1;  
  } if (d=='V') {  
    return 5;  
  } if (d=='X') {  
    return 10;  
  } if (d=='L') {  
    return 50;  
  } if (d=='C') {  
    return 100;  
  } if (d=='D') {  
    return 500;  
  } if (d=='M') {  
    return 1000;  
  }  
  return 0;  
}  
int main () {  
  string a;  
  cin >> a;  
  int n=0,j=0;  
  for (int i=0;i<a.length();++i) {  
    if (j==2) {  
      j=1;  
    }  
    if (j==0){  
      if (roma(a[i+1])>roma(a[i])) {  
        n=n+roma(a[i+1])-roma(a[i]);  
        j=2;  
      } else {  
        n=n+roma(a[i]);  
      }  
    } if (j==1) {  
      j=0;  
    }  
  }  
  cout << n << endl;  
}  