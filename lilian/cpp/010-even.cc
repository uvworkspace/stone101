#include <iostream>
#include <vector>
using namespace std;
int collectEven(vector<int>& arr, vector<int>& out){
  int evens=0;
  for(int i=0; i< arr.size();i++){
    if (arr[i]%2==0){
      out.push_back(arr[i]);
      evens++;
    }
  }
  return evens;
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
  vector<int> arr_input;
  while (cin >> num){
    arr_input.push_back(num);
  }
  int k=collectEven(arr_input,out);
  cout << "vec:"<<k<<":";
  for (int i=0; i<out.size();i++){
      cout << out[i] <<",";
  }
}