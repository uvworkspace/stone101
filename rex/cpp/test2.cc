#include<iostream>
#include<vector>
using namespace std;

int collectEven(int& arr, int& out ,int& cnt,int& max){
  int n = 0;
  for (int i = 0; i<arr.size(),cnt<max;i++){
    if (arr[i]%2 == 0) {
    out[cnt]=arr[i];
    cnt+=1;
    n +=1;
    }
  }
  return n;
}

int main() {
  int arr[] = {1,2,3,4,5,6,7};
  int cnt = 0;
  int max = 100
  int out[max];
  cout<<collectEven( arr, out,cnt,max)<<endl;
  
  for (int i =0 ; i < cnt;i++){
    if (i==cnt-1)cout<<out[i];
    else cout<<out[i]<<",";
  }
  cout<<endl;
}