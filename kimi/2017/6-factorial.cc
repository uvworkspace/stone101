#include <iostream>  
#include <string>
#include <math.h>
#include <vector>
using namespace std;
vector<int> times(vector<int> nums,int n) {
  vector<int> b=nums;
  for (int i=0;i<b.size();++i) {
    b[i]=b[i]*n;
  }
  for (int j=0;j<b.size()-1;++j) {
    b[j+1]=b[j+1]+(b[j]-b[j]%10)/10;
    b[j]=b[j]%10;
  }
  while (b[b.size()-1]>=10) {
    b.push_back((b[b.size()-1]-b[b.size()-1]%10)/10);
    b[b.size()-2]=b[b.size()-2]%10;
  }
  return b;
}
int main () {
  int n;
  cin >> n;
  vector <int> a={1};
  for (int i=2;i<n;++i) {
    a=times(a,i);
  }
  for (int j=a.size()-1;j>=0;--j) {
    cout << a[j];
  }
  cout << endl;
}