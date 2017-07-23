#include <iostream>  
#include <string>  
#include <math.h>  
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int find(string arr[],int len,string a) {
  for (int i=0;i<len;++i) {
    if (arr[i]==a) {
      return i;
    }
  }
  return -1;
}

int uniq1(string a[],int len) {
  string b[len];
  int s_l=0;
  int c[len];
  for (int i=0;i<len;++i) {
    if (find(b,len,a[i])==-1) {
      b[s_l]=a[i];
      c[s_l]=1;
      s_l++;
    } else {
      c[find(b,len,a[i])]++;
    }
  }
  for (int j=0;j<s_l;++j) {
    cout << "[" << b[j] << "] " << c[j] << endl;
  }
}

int uniq2(vector <string> nums) {
  std::map<string,int> c;
  for (string&i : nums) {
    c[i]++;
  }
  for(auto& pair : c) {
    cout << "[" << pair.first << "] " << pair.second << endl;
  }
  cout << endl;
}

int main () {
  vector<string>nums={"abc","def","xxx","xx","xxx","abc","def","xxx"};
  uniq2(nums);
  string a[10000];
  int len=0;
  while (cin >> a[len]) {
    len++;
  }
  uniq1(a,len);
}