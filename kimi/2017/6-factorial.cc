#include <iostream>  
#include <string>
#include <math.h>
#include <string.h>
#include <vector>
using namespace std;

#define MAX (1000 + 10)
const int CMAX = 100000;
int aaa[CMAX];
int aaalen;

void times1(vector<int>&nums,int n) {
  int sum = 0;
  for (int i=0;i<nums.size();++i) {
    sum+=nums[i]*n;
    nums[i]=sum%10;
    sum=sum/10;
  }
  while (sum>0) {
    nums.push_back(sum%10);
    sum=sum/10;
  }
}

int times2(int nums[],int n,int len) {
  int sum=0;
  for (int i=0;i<len;++i) {
    sum+=nums[i]*n;
    nums[i]=sum%10;
    sum=sum/10;
  }
  while (sum>0) {
    nums[len]=sum%10;
    sum=sum/10;
    len++;
  }
  return len;
}
int times3(char nums[],int n,int len) {
  int sum=0;
  for (int i=0;i<len;++i) {
    sum+=nums[i]*n;
    nums[i]=sum%10;
    sum=sum/10;
  }
  while (sum>0) {
    nums[len]=sum%10;
    sum=sum/10;
    len++;
  }
  return len;
}
void fac1(int n) {
  vector <int> a={1};
  for (int i=2;i<=n;++i) {
    times1(a,i);
  }
  for (int j=a.size()-1;j>=0;--j) {
    cout << a[j];
  }
  cout << endl;
}

void fac2(int n) {
  int aa[10000];
  aa[0]=1;
  int len=1;
  for (int j=2;j<=n;++j) {
    len=times2(aa,j,len);
  }
  for (int j=len-1;j>=0;--j) {
    cout << aa[j];
  }
  cout << endl;
}
int times2a(int n) {
  int sum=0;
  for (int i=0;i<aaalen;++i) {
    sum+=aaa[i]*n;
    aaa[i]=sum%10;
    sum=sum/10;
  }
  while (sum>0) {
    aaa[aaalen]=sum%10;
    sum=sum/10;
    aaalen++;
  }
}

void fac2a(int n) {
  memset(aaa, 0, MAX * sizeof(int));
  aaa[0]=1;
  aaalen=1;
  for (int j=2;j<=n;++j) {
    times2a(j);
  }
  for (int j=aaalen-1;j>=0;--j) {
    cout << aaa[j];
  }
  cout << endl;
}

void fac3(int n) {
  char aa[10000];
  aa[0]=1;
  int len=1;
  for (int j=2;j<=n;++j) {
    len=times3(aa,j,len);
  }
  for (int j=len-1;j>=0;--j) {
    aa[j] = aa[j] + '0';
  }
  //reverse(aa, len);
  aa[len] = '\0';
  
  cout << aa << endl;
}

int main () {
  int n;
  while (cin >> n) {
    fac1(n);
    fac2(n);
    fac3(n);
    fac2a(n);
  }
}