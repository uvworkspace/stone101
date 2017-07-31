#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

bool before(vector<int>& nums, int idx, int x){
  for (int i=0; i<idx; i++){
    if (nums[i]==x) return true;
  }
  return false;
}

void uniq1(vector<int>& nums){
  for (int i=0, n=nums.size(); i<n; i++){
    if (!before(nums,i,nums[i])){
    //if (find(nums, nums.begin(), nums.begin() + i) != nums.begin()+i) {
      cout << nums[i] <<" ";
    }
  }
}

void uniq2(vector<int>& nums){
  if (nums.size()==0){
    return ;
  }
  vector<int> Nums=nums;
  sort(Nums.begin(),Nums.end());
  cout<< Nums[0]<< " ";
  for (int i=1; i<Nums.size();i++){
    if (Nums[i]!=Nums[i-1]){
      cout << Nums[i] <<" ";
    }
  }
}

void uniq3(vector<int>& nums){
  map<int,bool> occurs;
  for (int i=0; i< nums.size();i++){
    int num=nums[i];
    if (!occurs[num]){
      occurs[num]= true;
      cout << nums[i] <<" ";
    }
  }
  /*for (auto num : nums) {
    if (!occurs[num]){
      occurs[num]= true;
      cout << num <<" ";
    }
  }*/
}
bool before(int nums[], int idx, int x){
  for (int i=0; i<idx; i++){
    if (nums[i]==x) return true;
  }
  return false;
}
void uniq4(int nums[]){
  int sz = sizeof(nums)-1;
  for (int i=0; i< sz;i++){
    if (!before(nums,i,nums[i])){
      cout << nums[i] <<" ";
    }
  }
}

void uniq5(int nums[]){
  if (sizeof(nums)==1){
    return ;
  }
  sort(nums,nums+sizeof(nums)-1);
  cout<< nums[0]<< " ";
  for (int i=1; i<sizeof(nums)-1;i++){
    if (nums[i]!=nums[i-1]){
      cout << nums[i] <<" ";
    }
  }
}

int main(){
  /*vector<int> arr = { 3, 1, 4, 1, 5, 9, 1 };  //or  arr({3,1,4,1,5,9})
  uniq1(arr);
  uniq2(arr);
  uniq3(arr);
  int arr2[] = { 3, 1, 4, 1, 5, 9, 1 };
  uniq4(arr2);
  uniq5(arr2);
  uniq4(arr2);*/
  //sort(arr.begin(),arr.end());
  //uniq1(arr);
  //cout << std::find(arr.begin(), arr.end()) != arr.end();
  int numbers;
  vector<int> arr;
  while (cin>> numbers){
    arr.push_back(numbers);
  }
  uniq1(arr);
  uniq2(arr);
  uniq3(arr);
}