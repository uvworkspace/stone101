#include<iostream>
#include<vector>
using namespace std;
bool notin(int x,vector<int>arr ){
  for(int n:arr){
    if(n==x){
      return false;
    }
  }
  return true;
}

int uniq1(vector<int>arr):
  vector<int> c;
  for(int n:arr){
    if notin(n,arr){
      c.push_back(n);
    }
   for(int n:b){
     cout<<n <<" ";
   }

int main(){
  vector<int>a={5,9,3,52,3,5};
  uniq1(a)
}