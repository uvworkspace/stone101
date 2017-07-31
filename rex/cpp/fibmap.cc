#include<iostream>
#include<map>
using namespace std;

long fib(int n,map<int,long>& maps){
  if (n<1)return 0;
  if (n==1)return 1;
  if (maps[n]){ 
    return maps[n];
  }
  maps[n]=fib(n-1,maps)+fib(n-2,maps);
  return maps[n];
}


int main(){
  map<int,long> maps;
  for (int i =1;i<=50;i++){
    cout<<fib(i,maps)<<" ";
    }
}