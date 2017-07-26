#include <iostream>  
#include <string>  
#include <math.h>  
using namespace std;  
// Question:  a=1000000,b=1000000時，會跑出6e+06,要如何跑出6000001呢?
// URL     :  http://www.tcgs.tc.edu.tw:1218/ShowProblem?problemid=a035
int main () {  
  long long int a,b;  
  long long int n;  
  cin >> a;  
  cin >> b;  
  n=b*log10(a);  
  cout << floor(n)+1 << endl;  
} 