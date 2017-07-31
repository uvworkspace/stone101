#include<iostream>
#include<vector>
using namespace std;

int collectEven(int arr[], int len, int outA[], int cnt, int max, vector<int>& outV){
  int n = cnt;
  for (int i = 0; i<len && cnt<max;i++){
    if (arr[i]%2 == 0) {
      outV.push_back(arr[i]);
      outA[n]=arr[i];
      n +=1;
    }
  }
  return n;
}

int main() {
  
  vector<int> outV;
  int arr[100] = {};
  int cnt = 0;
  int max = 100;
  int len = sizeof(arr)/sizeof(arr[0]);
  int outA[max];
  cnt = collectEven( arr, len, outA, cnt, max, outV);
  
  int arr2[] = {1,2,3,4,5,6,7};
  int len2 = sizeof(arr2)/sizeof(arr2[0]);
  cnt = collectEven( arr2, len2, outA, cnt, max, outV);
  
  for (int i = 0; i < outV.size();i++){
     if (i==outV.size()-1)cout<<outV[i];
    else cout<<outV[i]<<",";
  }
  cout<<endl;
  for (int i =0 ; i < cnt;i++){
    if (i==cnt-1)cout<<outA[i];
    else cout<<outA[i]<<",";
  }
  cout<<endl;
}



