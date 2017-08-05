#include <iostream>  
#include <string>  
#include <math.h>  
#include <algorithm>
using namespace std;

int digit(int a,int n) {
  int b=a;
  for (int i=0;i<7-n;++i) {
    b=b/10;
  }
  return b%10;
}
int main () {
  int a;
  cin >> a;
  int number=0;
  for (int i=1;i<=7;++i) {
    number+=digit(a,i)*i;
  }
  cout << (10-number%10)%10 << endl;
}