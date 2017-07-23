#include <iostream>
#include <vector>
using namespace std;

int pickeven1(vector<int>& arr, vector<int>& out){
  int x=0;
  for(int n:arr){
    if(n%2==0){
       out.push_back(n);
       x++;
    }
  }
  return x;
}

int pickeven2(int arr[],int lena,int out[],int leno,int lenmax){
  int x=0;
  for (int n=0;n<lena;n++){
    if(arr[n]%2==0){
      x++;
      if(leno<lenmax){
        out[leno]=arr[n];
        leno++;
      }
    }
  }
  return x;
}

int main(){
  vector<int> arr1= {};
  vector<int> out1 = {};
  int arr2[1000];
  int lena=0;
  int out2[1000];
  int leno=0;
  int x;
  while(cin >>x){
    arr1.push_back(x);
    arr2[lena]=x;
    lena++;
  }
  pickeven1(arr1,out1);
  int cnt = pickeven2(arr2,lena,out2,leno,1000);
  for (int n:out1){
    cout << n<<",";
  }
  cout<<endl;
  for (int n=0;n<cnt+leno;n++){
    cout <<out2[n]<<",";
  }
  cout <<endl;
}
