#include <iostream>
#include <map>
#include <algorithm> 
using namespace std;

void pr(vector<int>& v) {
  for (int n : v) {
    cout << n << ";";
  }
  cout << endl;
}

void pr2(int a[], int len) {
  for (int i=0; i<len; i++) {
    cout << a[i] << ",";
  }
  cout << endl;
}

int arr[1000];
int len;
int main() {
  vector<int> v;
  int x;
  len = 0;
  while (cin >> x) {
    v.push_back(x);
    arr[len] = x;
    len++;
  }
  pr(v);
  pr2(arr, len);
}