#include <iostream>
#include <map>
using namespace std;

long int fib(int n,long int cache[],int max){
  if (n>=max) return -1;
  if (n<=2){
    return 1;
  }
  if (cache[n]>0){
    return cache[n];
  }
  cache[n]=fib(n-1,cache,max)+fib(n-2,cache,max);
  return cache[n];
}

int main(){
  const int max=100;
  //long int cache[max]={};
  for (int i=1; i<=50;i++){
    long int cache[max]={};
    cout << fib (i,cache,max) <<" ";
  }
}

/*long fib2(int n, map<int,long>& cache,int max){
  if (n>=max) return -1;
  if (n<=2){
    return 1;
  }
  if (cache[n]>0){
    return cache[n];
  }
  cache[n]=fib2(n-1,cache,max)+fib2(n-2,cache,max);
  return cache[n];
}

int main(){
  int max=100;
  map <int,long> cache;
  for (int i=1; i<=50;i++){
    cout << fib2 (i,cache,max) <<" ";
  }
}*/