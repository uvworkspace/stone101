#include <iostream>
#include <vector>
using namespace std;
int collectEven_array(int arr[], int len, int out[], int preslen, int max){
  for(int i=0; i< len && preslen<max;i++){
    if (arr[i]%2==0){
      out[preslen++]=arr[i];
    }
  }
  return preslen;
}

int main() {
  int arr[100], num;
  int len = 0;
  int out[100];
  int max=100;
  int count=0;
  int preslen=0;
  while (cin >> num) {
    arr[len++] = num;
  }
  //int sz = sizeof(arr)/sizeof(arr[0]);
  preslen =collectEven_array(arr,len,out,preslen,max);
  //cout << preslen;
  cout << "arr:"<<preslen<<":";
  for (int i=0; i<preslen-1;i++){
      cout << out[i] <<",";
  }
  cout << out[preslen-1]<<endl;
}
/*
int main0() {
  int arr[]={3,1,4,1,5,9};
  int sz = sizeof(arr)/sizeof(arr[0]);
  int out[100];
  int max=100;
  int count=0;
  int preslen=0;
  preslen =collectEven_array(arr,sz,out,preslen,max);
  
  int arr2[]={2,3,4,5,6,7};
  int sz2 = sizeof(arr2)/sizeof(arr[0]);
  preslen =collectEven_array(arr2,sz2,out,preslen,max);
  
  cout << preslen;
  
}*/

