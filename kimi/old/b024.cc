#include <iostream>  
#include <string>  
#include <math.h> 
#include <map>
using namespace std;
long long int climb(int n,int aaa[]) {
  if (n==1 or n==2) {
    return n;
  } else if (aaa[n]>0) {
    return aaa[n];
  } else {
    aaa[n]=climb(n-1,aaa)+climb(n-2,aaa);
    return aaa[n];
  }
}

int main () {
  int n;
  cin >> n;
  int aaa[100]={0};
  long long int k=climb(n,aaa);
  cout << k << " " << climb(k%n,aaa) << endl;
}