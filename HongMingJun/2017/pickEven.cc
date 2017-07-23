#include<iostream>
#include<vector>
using namespace std;

vector<int> pickEven(vector<int>& arr, vector<int>& out){
  for(int i=0;i<arr.size()-1;i++){
    if(arr[i]%2==0) out.push_back(arr[i]);
  }
  return out;
}
/*int pickEven2(int arr[],int len,int out[],int max,int outlen){
  int cnt = 0;
  for(int i=0;i<len;i++){
    if(arr[i]%2==0&&outlen<max){
      out[outlen]=arr[i];
      outlen++;
      cnt++;
    } 
  }
  return cnt;
}*/
int main(){
  vector<int> a;
  vector<int> b;
  int arr[100];
  int out[100];
  int k,len=0;
  while(cin>>k){
    a.push_back(k);
    arr[len]=k;
    len++;
  }
  vector<int> v=pickEven(a,b);
  cout<<"vec:"<<v.size()<<":";
  for(int i=0;i<v.size()-1;i++){
    if(i=0) cout<<v[i];
    else cout<<","<<v[i];
  }
  /*int len2=pickEven2(arr[],len,out[],100,0);
  cout<<"arr:"<<v.size<<":";*/
  
}