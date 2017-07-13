#include <iostream>  
#include <string>  
#include <math.h>  
#include <algorithm>
#include <vector>
using namespace std;

int main () {
  vector<int> nums;
  int N,k[N];
  cin >> N;
  for (int i=0;i<N;++i) {
    cin >> k[i];
    nums.push_back(k[i]);
  }
  sort(nums.begin(), nums.end());
  for(int j=nums.size()-1;j>=0;--j) {
    cout << nums[j] << " ";
  }
}