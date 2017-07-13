#include <iostream>  
#include <string>  
#include <math.h>  
using namespace std;  
// URL     :  http://www.tcgs.tc.edu.tw:1218/ShowProblem?problemid=a032
int main() {  
  int a,b;  
  char c;  
  cin >> a;  
  cin >> c;  
  cin >> b;  
  if (c=='+') {  
    cout << (a+b) << endl;  
  } if (c=='*') {  
    cout << (a*b) << endl;  
  } if (c=='-') {  
    cout << (a-b) << endl;  
  }  
}  