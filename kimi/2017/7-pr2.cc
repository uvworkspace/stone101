#include <iostream>  
#include <string>  
#include <math.h>  
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

void pr2(int a[], int len) {
  for (int i=0; i<len; i++) {
    cout << a[i] << ",";
  }
  cout << endl;
}

int main() {
  int arr[1000];
  int x;
  int len = 0;
  while (cin >> x) {
    arr[len] = x;
    len++;
  }
  pr2(arr,len);
}