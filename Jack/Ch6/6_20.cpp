#include <iostream>
using namespace std;
int main(){
  int limit,n=2,factor;
  bool isprime;
  cout << "show the all primes under what number? ";
  cin >> limit;
  while(n <= limit){
    isprime = true;
    factor = 2;
      while(factor < n){
        if(n % factor == 0){
          isprime = false;
          break; 
        }
        factor++;
      }
    if(isprime)
      cout << n << " "; 
    n++;
  }
} 