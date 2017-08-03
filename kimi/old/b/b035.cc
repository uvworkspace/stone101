#include <iostream>  
#include <string>  
#include <math.h> 
#include <algorithm>
using namespace std;

int main () {
  int n;
  cin >> n;
  int a[n];
  for (int i=0;i<n;++i) {
    cin >> a[i];
  }
  sort(a,a+n);
  long long int money=0;
  int crybaby=n;
  for (int j=0;j<n;++j) {
    money=money+a[j]*(crybaby-1);
    crybaby--;
  }
  cout << money*100 << endl;
}