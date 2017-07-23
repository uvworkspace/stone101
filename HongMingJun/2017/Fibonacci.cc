/*
var mem = []
def fib(n):
  if n == 1 or n == 2:
    return 1
  elif mem[n] > 0:
    return mem[n]
  else:
    mem[n] = fib(n - 1) + fib(n - 2)
    return mem[n]
    
def fib2(n, arr):
  arr[1] = 1
  arr[2] = 1
  if n == 1 or n == 2:
    return 1
  elif arr[n] > 0:
    return arr[n]
  else:
    arr[n] = fib2(n - 1, arr) + fib2(n - 2, arr)
    return arr[n]
    */
#include<iostream>
#include<map>

map<int,int> mem;

int fib(int n){
  if(n==1||n==2) return 1
  if (mem[n] > 0) {
    return mem[n];
  } else {
    mem[n] = fib(n - 1) + fib(n - 2);
    return mem[n];
  } 
}
int main(){
  for
}