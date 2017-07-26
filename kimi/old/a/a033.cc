#include <iostream>  
#include <string>  
#include <math.h>  
using namespace std;  
// URL     :  http://www.tcgs.tc.edu.tw:1218/ShowProblem?problemid=a033
int main () {  
  int a;  
  cin >> a;  
  if (a<=9) {  
    cout << "|_______" << a << "|" << endl;  
  } if (a<=99 and a>=10) {  
    cout << "|______" << a << "|" << endl;  
  } if (a<=999 and a>=100) {  
    cout << "|_____" << a << "|" << endl;  
  } if (a<=9999 and a>=1000) {  
    cout << "|____" << a << "|" << endl;  
  }   
  if (a>=10000) {  
    int b=a%10000;  
    if (b<=9) {  
      cout << "|____000" << b << "|" << endl;  
    } if (b<=99 and b>=10) {  
      cout << "|____00" << b << "|" << endl;  
    } if (b<=999 and b>=100) {  
      cout << "|____0" << b << "|" << endl;  
    } if (b<=9999 and b>=1000) {  
      cout << "|____" << b << "|" << endl;  
    }  
  }  
} 