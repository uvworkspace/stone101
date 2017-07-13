#include <iostream>
using namespace std;
int recursive_gcd(int m, int n){
  if(n == 0)
    return m;
  else
    return recursive_gcd(n, m % n);
}

int iterative_gcd(int n1, int n2){
  int min = (n1 < n2) ? n1 : n2;
  int gcd = 1;
  for (int i = 1; i <= min; i++)
    if (n1 % i == 0 && n2 % i == 0)
      gcd = i; 
  return gcd;
}

int main(){
  for (int n1 = 1; n1 <= 10; n1++)
    for (int n2 = 1; n2 <= 20; n2++)
      cout << "gcd of " << n1 << " and " << n2 << " is " << recursive_gcd(n1, n2) << "\n";
  cout <<"==================================================================\n";   
  for (int n1 = 1; n1 <= 10; n1++)
    for (int n2 = 1; n2 <= 20; n2++)
      cout << "gcd of " << n1 << " and " << n2 << " is " << iterative_gcd(n1, n2) << "\n";
}