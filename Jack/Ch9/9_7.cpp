#include <iostream>
#include <cmath>
using namespace std;
bool isprime(int n){
  bool flag = true; 
  double root = sqrt(n);
  for(int factor = 2; flag && factor <= root; factor++)
    flag = (n % factor != 0);
  return flag;
}
int main(){
  int limit;
  cout << "show the all primes under what number? ";
  cin >> limit;
  for(int n = 2; n <= limit; n++)
    if(isprime(n)) 
      cout << n << " "; 
}