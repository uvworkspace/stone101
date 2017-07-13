#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int limit;
  bool isprime;
  double root;
  cout << "show the all primes under what number? ";
  cin >> limit;
  for(int n = 2; n <= limit; n++){
    isprime = true; 
    root = sqrt(n);
    for(int factor = 2; isprime && factor <= root; factor++)
      isprime = (n % factor != 0);
    if(isprime)
      cout << n << " "; 
  }
} 