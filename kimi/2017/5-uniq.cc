#include <iostream>  
#include <string>  
#include <math.h>  
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int find(vector<int>arr,int a) {
  for (int i=0;i<arr.size();++i) {
    if (arr[i]==a) {
      return true;
    }
  }
  return false;
}
int find2(int arr[],int len,int a) {
  for (int i=0;i<len;++i) {
    if (arr[i]==a) {
      return true;
    }
  }
  return false;
}

int uniq1 (vector <int> nums) {
  vector <int> b={nums[0]};
  for (int i=0;i<nums.size();++i) {
    if (!find(b,nums[i])) {
      b.push_back(nums[i]);
    }
  }
  for (int j : b) {
    cout << j << " ";
  }
  cout << endl;
}

int uniq2(vector <int> nums) {
  vector<int> b;
  vector<int> c=nums;
  sort(c.begin(),c.end());
  b.push_back(c[0]);
  for (int i=1;i<c.size()-1;++i) {
    if (c[i-1]!=c[i]) {
      b.push_back(c[i]);
    }
  }
  for (int j:b) {
    cout << j << " ";
  }
  cout << endl;
}

int uniq3(vector <int> nums) {
  std::map<int,int> b;
  vector <int> c;
  for (int i:nums) {
    if (!b[i]) {
      b[i]=true;
      c.push_back(i);
    }
  }
  for (int j:c) {
    cout << j << " ";
  }
  cout << endl;
}
void pr(int a[],int len) {
  for (int i=0; i<len; ++i) {
    cout << a[i] << " ";
  }
  cout << endl;
}
int uniq4(int a[],int len_a) {
  int b[len_a];
  int len_b=1;
  b[0]=a[0];
  for(int i=1;i<len_a;++i) {
    if (!find2(b,len_b,a[i])) {
      b[len_b]=a[i];
      len_b++;
    }
  }
  pr(b,len_b);
}

int uniq5(int a[],int len) {
  int b[len];
  int len_b=1;
  int *s=a;
  sort(s,s+len);
  b[0]=s[0];
  for (int i=1;i<len;++i) {
    if (s[i-1]!=s[i]) {
      b[len_b]=s[i];
      len_b++;
    }
  }
  pr(b,len_b);
}

int main () {
  vector<int> nums={3,1,2,3,5,4,5};
  uniq1(nums);
  uniq2(nums);
  uniq3(nums);
  int arr[7] ={3,1,2,3,5,4,5};
  uniq4(arr,7);
  uniq5(arr,7);
}