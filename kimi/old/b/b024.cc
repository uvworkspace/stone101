#include <iostream>  
#include <string>  
#include <math.h> 
using namespace std;
long long int aaa[100]={0};
long long int climb(int n) {
  if (n==1) {
    return 1;
  } else if (n==2) {
    return 2;
  } else if (aaa[n]>0) {
    return aaa[n];
  } else {
    aaa[n]=climb(n-1)+climb(n-2);
    return aaa[n];
  }
}

int main () {
  int n;
  cin >> n;
  long long int k=climb(n);
  cout << k << " " << climb(k%n) << endl;
}