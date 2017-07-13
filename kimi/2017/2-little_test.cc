#include <iostream>  
#include <string>  
#include <math.h>  
using namespace std;
void str1 (int a) {
  int n=0;
  while (n<=a) {
    cout << n << " ";
    n=n+1;
  }
  cout << endl;
}
void str2 (int a) {
  while (a>=0) {
    cout << a << " ";
    a=a-1;
  }
  cout << endl;
}
int main () {
  int a;
  cin >> a;
  str1(a);
  str2(a);
  return 0;
}