#include <iostream>
using namespace std;
int main(){
  int limit;
  bool isprime;
  cout << "show the all primes under what number? ";
  cin >> limit;
  for (int n = 2; n <= limit; n++){
    isprime = true;
    for(int factor = 2;isprime && factor < n;factor++)
      isprime = (n % factor != 0);
    if(isprime)
      cout << n << " "; 
  }
}