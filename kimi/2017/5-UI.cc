#include <iostream>  
#include <string>  
#include <math.h>  
#include <vector>
using namespace std;

int find(vector<int> arr,int a) {
  for (int i=0;i<arr.size();++i) {
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
}
int main() {
  vector<int> nums={1,2,3,4,3,4,3,4,3,4,3,4,2,3,5,6,7,6};
  uniq1(nums);
}