#include <iostream>  
#include <string>  
#include <math.h>  
using namespace std;
void line(int a) {
  for (int i=1;i<=a;++i) {
    cout << " ";
  }
}
void diamond(int a) {
  for (int i=1;i<2*a;++i) {
    if (i==1 or i==2*a-1) {
      line(a-1);
      cout << "*" << endl;
    } if (i>=2 and i<=a) {
      line(a-i);
      cout << "*";
      line(2*i-3);
      cout << "*" << endl;
    } if (i>a and i<2*a-1) {
      line(i-a);
      cout << "*";
      line(4*a-3-2*i);
      cout << "*" << endl;
    }
  }
}
int main () {
  int a;
  cin >> a;
  diamond(a);
  return 0;
}