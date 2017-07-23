#include <iostream>  
#include <string>  
#include <math.h>
#include <vector>
#include <map>
using namespace std;

int fib1(int n,int nums[]) {
  if (n==1 or n==2) {
    return 1;
  } else if (nums[n]>0) {
    return nums[n];
  } else {
    nums[n]=fib1(n-1,nums)+fib1(n-2,nums);
    return nums[n];
  }
}

long int fib2(int n,map <int,long int>&nums) {
  if (n==1 or n==2) {
    return 1;
  } if (nums[n]>0) {
    return nums[n];
  } else {
    nums[n]=fib2(n-1,nums)+fib2(n-2,nums);
    return nums[n];
  }
}

int main () {
  int nums1[1000];
  for (int i=1;i<=50;++i) {
    int nums1[1000] = {0};
    cout << "(" << i << ") " << fib1(i,nums1) << endl;
  }
  
  cout << "-------------------" << endl;
  for (int j=1;j<=20;++j) {
    std::map<int,long int> nums2;
    cout << "(" << j << ") " << fib2(j, nums2) << endl;
  }
}