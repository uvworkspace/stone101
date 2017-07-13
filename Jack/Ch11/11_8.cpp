#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void print(const vector<int>& vec){
  for(int e : vec)
    cout << e << " ";
  cout << '\n';
}

bool isprime(int n){
  if(n<2)
    return false;
  bool flag = true; 
  double root = sqrt(n);
  for(int factor = 2; flag && factor <= root; factor++)
    flag = (n % factor != 0);
  return flag;
}

vector<int> prime_vec(int min, int max){
  vector<int> vec;
  for (int i = min; i <= max; i++)
    if(isprime(i))
      vec.push_back(i);
  return vec;
}

int main(){
  int min, max;
  cout << "Please enter the lower bound and upper bound of the prime vector:\n";
  cin >> min >> max;
  vector<int> vec = prime_vec(min, max);
  print(vec);
}