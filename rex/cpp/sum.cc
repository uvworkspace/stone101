#include<iostream>
using namespace std;

int sumDigits(int n){
  int sum = 0;
  for (int i = n ; i>0 ; i/=10){
    sum += i%10;
    
  }
  return sum;

}
int sumDigits2(int n){
  int div = n;
  int sum2 = 0;
  while(div > 0){
    sum2 += div % 10;
    div/=10;
  }
  return sum2;
}

int main() {
  int n;
  while (std::cin >> n) {
    std::cout << sumDigits(n) << std::endl;
    std::cout << sumDigits2(n) << std::endl;
  }
}