#include <iostream>
#include <vector>
using namespace std;
int collectEven_vec(vector<int>& arr, vector<int>& out){
  int evens=0;
  for(int i=0; i< arr.size();i++){
    if (arr[i]%2==0){
      out.push_back(arr[i]);
      evens++;
    }
  }
  return evens;
}
int collectEven_array(int arr[], int len, int out[], int preslen, int max){
  for(int i=0; i< len && preslen<max;i++){
    if (arr[i]%2==0){
      out[preslen++]=arr[i];
    }
  }
  return preslen;
}

int main() {
  /*vector<int> arr({3,1,4,1,5,9});
  vector<int> out;
  int n=collectEven(arr,out);
  
  vector<int> arr2({2,3,4,5,6,7});
  int m=collectEven(arr2,out);
  
  cout << n <<" "<< m<<endl;*/
  vector<int> out;
  int num;
  //array
  int arr[100];
  int len = 0;
  int out2[100];
  int max=100;
  int count=0;
  int preslen=0;
  //
  vector<int> arr_input;
  while (cin >> num){
    arr_input.push_back(num);
    //array
    arr[len++] = num;
  }
  int k=collectEven_vec(arr_input,out);
  cout << "vec:"<<k<<":";
  for (int i=0; i<out.size()-1;i++){
      cout << out[i] <<",";
  }
  cout << out[out.size()-1]<<endl;
  /////array/////
  preslen =collectEven_array(arr,len,out2,preslen,max);
  cout << "arr:"<<preslen<<":";
  for (int i=0; i<preslen-1;i++){
      cout << out2[i] <<",";
  }
  cout << out2[preslen-1]<<endl;
}
