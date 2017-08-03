#include <iostream>  
#include <string>  
#include <math.h> 
using namespace std;

int main () {
  int n;
  cin >> n;
  int i,aa=0,c=0;
  while(n!=0) {
    i=n%10;
    n=n/10;
    c++;
    if (c<5) {
      if (i>=5) {
        aa=aa+i-4;
      } else {
        aa=aa+i;
      }
    } else {
      aa=aa+i;
    }
  }
  cout << aa << endl;
}