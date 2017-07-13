#include <iostream>  
#include <string>  
#include <math.h>  
using namespace std;  
// URL     :  http://www.tcgs.tc.edu.tw:1218/ShowProblem?problemid=a041
int main () {  
  int stick,total;  
  cin >> total;  
  stick=total;  
  while (stick>=5) {  
    total=total+(stick-stick%5)/5;  
    stick=stick%5+(stick-stick%5)/5;  
  }  
  cout << total << endl;  
}  