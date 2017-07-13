#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool find(vector<int> arr,int ch){
  for(int i=0;i<arr.size();i++){
    if(arr[i]==ch) return 1;
  }
  return 0;
}
int uniq1(vector<int> arr){
  vector<int> v;
  for(int i=0;i<arr.size();i++){
    if(!find(v,arr[i])) v.push_back(arr[i]);
  }
  for (int n : v) {
    cout << n<<" ";
  }
}
int uniq2(vector<int> arr){
  vector<int> out = arr;
  sort(out.begin(), out.end());
  for(int i=0;i<out.size();i++){
    if(arr[i-1]!=arr[i]) out[out.size()]=arr[i];
  }
  for (int n : out) {
    cout << n<<" ";
  }
}
int main(){
  vector<int> s={1,1,2,3,4,5};
  uniq1(s);
  uniq2(s);
}