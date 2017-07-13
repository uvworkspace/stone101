#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

const int LIMIT = 1024;
vector<bool> isprime(LIMIT,true); 

int main(){
  clock_t start = clock();
  isprime[0] = isprime[1] = false;
  for(int i = 2; i <= LIMIT; i++){
    if(isprime[i]){
      cout << i << " ";
      for(int j = i+i; j<=LIMIT; j += i)
        isprime[j] = false;
    }
  }
  cout << endl; 
  cout << "Elapsed time: " << static_cast<double>(clock() - start)/CLOCKS_PER_SEC << " seconds";
}