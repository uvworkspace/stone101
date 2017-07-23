#include <iostream>
#include <vector>
#include <map>
using namespace std;

long int fib1(int n,long int arr[],int len){
  if (n >= len) return -1;
  if (n<=1){
    return 1;
  }
  if (arr[n]>0){
    return arr[n];
  }
  long int ans=fib1(n-1,arr,len)+fib1(n-2,arr,len);
  arr[n]=ans;
  return ans;
}

long int fib2(int n,std::map<int,long int> &cnts){
  if (n<=1){
    return 1;
  }
  if (cnts[n]>0){
    return cnts[n];
  }
  long int ans=fib2(n-1,cnts)+fib2(n-2,cnts);
  cnts[n]=ans;
  return ans;
}

int main(){
  long int arr[1000]={};
  std::map<int,long int>cnts;
  for(int n=0;n<50;n++) {
    cout <<"fib2("<<n<<")="<<fib2(n,cnts)<<endl;
  }
  for(int n=0;n<50;n++) {
    cout <<"fib1("<<n<<")="<<fib1(n,arr,1000)<<endl;
  }
}
