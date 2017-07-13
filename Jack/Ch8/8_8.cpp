///////////////////////////////////////////////////////////////////
//clock() can be used to compute the total time the process need.//
//this code runs abnormally on Cloud9,                           //
//maybe you can run it on other platform, like DevC++ ...        //
///////////////////////////////////////////////////////////////////
#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;
int main(){
  int limit;
  bool isprime;
  double root;
  clock_t start,end;
  cout << "show the all primes under what number? ";
  cin >> limit;
  start = clock();
  for(int n = 2; n <= limit; n++){
    isprime = true; 
    root = sqrt(n);
    for(int factor = 2; isprime && factor <= root; factor++)
      isprime = (n % factor != 0);
    if(isprime)
      cout << n << " "; 
  }
  end = clock();
  cout << "\nFind all the primes under " << limit << " totally costs "
  << static_cast<double>(end - start)/CLOCKS_PER_SEC << " seconds";
} 