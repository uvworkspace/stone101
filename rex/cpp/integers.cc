#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;


bool isIn(vector<int>& nums,int start,int end,int n)
{
  for (int l = start;l<end;l++){
    if(nums[l]==n){
      return true;
    }
  }
  return false;
}

void uniq1(vector<int>& nums){
  for (int i = 0; i<nums.size();i++){
    if ( !isIn(nums,i+1,nums.size(),nums[i]))
      cout<<nums[i]<<" ";
  }
  cout<<endl;
}

void uniq2(vector<int>& nums){
  vector<int> nNums = nums;
  sort(nNums.begin(),nNums.end());
  cout<<nNums[0]<<" ";
  for (int i =1;i<nNums.size();i++){
    if (nNums[i]!=nNums[i-1]){
      cout<<nNums[i]<<" ";
    }
  }
  cout<<endl;
}
void uniq3(vector<int>& nums){
  map<int,bool> has;
  for (int i =0;i<nums.size();i++){
    if(!has[nums[i]]){
      cout<<nums[i]<<" ";
      has[nums[i]] = true;
    }
  }
}

int main(){
  vector<int> nums({2,3,6,3,4,7,1,4,5});
  uniq1(nums);
  uniq2(nums);
  uniq3(nums);
}