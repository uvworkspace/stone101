#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int fib(int n,int fibarr[], int max){
  if (n<1)return 0;
  if (n==1)return 1;
  if (fibarr[n]>0){ 
    return fibarr[n];
  }
  
  fibarr[n]=fib(n-1,fibarr,max)+fib(n-2,fibarr,max);
  return fibarr[n];
}
int main(){
  for (int i =1;i<=30;i++){
    int fibarr[100] = {};
    int f = fib(i,fibarr, 100);
    cout<<f<<" ";
  }
}