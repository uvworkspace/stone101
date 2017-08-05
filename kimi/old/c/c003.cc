#include <iostream>  
#include <string>  
#include <math.h>  
#include <algorithm>
using namespace std;
int x[6]={200,1000,4000,10000,40000,200000};
int main () {
  string a,b;
  cin >> a >> b;
  int j=0;
  for (int i=7;i>=0;--i) {
    if (a[i]==b[i]) {
      j++;
    } else {
      break;
    }
  }
  if (j<3) {
    cout << 0 << endl;
  } else {
    cout << x[j-3] << endl;
  }
}