#include <iostream>
using namespace std;
int gcd(int n1, int n2){
  int gcd=1,i;
  int min = (n1 < n2) ? n1 : n2;
  while(min>1){
    for(i = 2; i <= min; i++)
      if(n1 % i == 0 && n2 % i == 0){
        gcd*=i;
        n1/=i;
        n2/=i;
        break;
      }
    if(i==min+1)
      break;
    else
      min/=i;
  }
  return gcd;
}
int main(){
  int n1, n2;
  cout << "Please enter two integers to find the gcd:\n";
  cin >> n1 >> n2;
  cout << "The gcd of " << n1 << " and " << n2 << " is " << gcd(n1,n2);
}
