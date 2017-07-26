#include<iostream>
#include<vector>
using namespace std;

int collectEven(vector<int>& arr, vector<int>& out ){
  int n = 0;
  for (int i = 0; i<arr.size();i++){
    if (arr[i]%2 == 0) {out.push_back(arr[i]);
    n+=1;}
    
  }
  return n;
}

int main() {
  vector<int> arr {1,2,3,4,5,6,7};
  vector<int> out;
  cout<<collectEven( arr, out)<<endl;
  
  vector<int> arr2 {1,2,3,4,5,6,7};
  cout<<collectEven( arr2, out)<<endl;
  for (int i =0 ; i < out.size();i++){
    if (i==out.size()-1)cout<<out[i];
    else cout<<out[i]<<",";
  }
  cout<<endl;
}