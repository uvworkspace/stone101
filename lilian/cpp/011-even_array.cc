#include <iostream>
#include <vector>
using namespace std;
int collectEven_array(int& arr, int& out, int& count){
  int evens=0;
  for(int i=0; i< arr.length();i++){
    if (arr[i]%2==0){
      out[arr.length()*count+evens]=arr[i];
      evens++;
    }
  }
  return out.length();
}

int main() {
  int arr[]=({3,1,4,1,5,9});
  int out[100];
  int count1=0;
  int n=collectEven_array(arr,out,count1);
  
  int arr2[]=({2,3,4,5,6,7});
  int count2=1;
  int m=collectEven_array(arr2,out,count2);
  
}

