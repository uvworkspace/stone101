#include <iostream>  
#include <string>  
#include <math.h> 
using namespace std;

int main () {
  int n;
  cin >> n;
  int aa[n];
  for (int i=0;i<n;++i) {
    cin >> aa[i];
  }
  int max=0;
  int aaa=0;
  for (int j=0;j<n;++j) {
    aaa=aaa+aa[j];
    if (max<aaa){
      max=aaa;
    }
  }
  cout << max << endl;
}