#include <iostream>  
#include <string>  
#include <math.h>  
#include <algorithm>
using namespace std;

int main () {
  int m,n;
  cin >> m >> n;
  if (m==90 and n<8) {
    cout << 0 << endl;
  } else if (m<90) {
    cout << 0 << endl;
  } else if (m==101 and n>7) {
    cout << 0 << endl;
  } else if (m>101) {
    cout << 0 << endl;
  } else {
    cout << 12*(m-90)+n-7 << endl;
  }
}