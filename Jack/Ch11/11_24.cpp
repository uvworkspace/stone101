#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
using namespace std;

const int LIMIT = 1000000;

vector<bool> isnotprime(LIMIT); 

void prime_method1(){
  int count = 0;
  clock_t start = clock(); 
  cout << "method1 is computing...\n";
  for(int n = 2; n <= LIMIT; n++){
    bool isprime = true; 
    for (int factor = 2;isprime && factor < n; factor++)
      isprime = (n % factor != 0);
    if(isprime)
      count++; 
  }
  cout << "count = " << count << " ";
  cout << "Elapsed time: " << static_cast<double>(clock() - start)/CLOCKS_PER_SEC << " seconds\n";
}
void prime_method2(){
  int count = 0;
  clock_t start = clock(); 
  cout << "method2 is computing...\n";
  for(int n = 2; n <= LIMIT; n++){
    bool isprime = true; 
    double root = sqrt(n);
    for(int factor = 2;isprime && factor <= root; factor++)
      isprime = (n % factor != 0);
    if(isprime)
      count++; 
  }
  cout << "count = " << count << " ";
  cout << "Elapsed time: " << static_cast<double>(clock() - start)/CLOCKS_PER_SEC << " seconds\n";
}
void prime_method3(){
  int count = 0;
  clock_t start = clock(); 
  cout << "method3 is computing...\n";
  isnotprime[0] = isnotprime[1] = true;
  for(int i = 2; i < LIMIT; i++){
    if(!isnotprime[i]){
      count++; 
      for(int j = i+i; j < LIMIT; j += i)
        isnotprime[j] = true;
    }
  }
  cout << "count = " << count << " ";
  cout << "Elapsed time: " << static_cast<double>(clock() - start)/CLOCKS_PER_SEC  << " seconds\n";
}

int main(){
  prime_method1();
  prime_method2();
  prime_method3();
}