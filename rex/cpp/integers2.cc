#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;


bool isIn(int nums[],int start,int end,int n)
{
  for (int l = start;l<end;l++){
    if(nums[l]==n){
      return true;
    }
  }
  return false;
}

void uniq4(int nums[],int len){
  for (int i = 0; i<len;i++){
    if ( !isIn(nums,i+1,len,nums[i]))
      cout<<nums[i]<<" ";
  }
  cout<<endl;
}

void uniq5(int nums[],int len){
  sort(nums,nums+len);
  cout<<nums[0]<<" ";
  for (int i =1;i<len;i++){
    if (nums[i]!=nums[i-1]){
      cout<<nums[i]<<" ";
    }
  }
  cout<<endl;
}


int main(){
  int nums[]={2,3,6,3,4,7,1,4,5};
  int len = sizeof(nums)/sizeof(nums[0]);
  uniq5(nums,len);
  for (int i = 0;i<len;i++){
    cout<<nums[i]<<" ";
  }
}