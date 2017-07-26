#include <iostream>
using namespace std;

/*int sumDigits(int x){
  int sum=0;
  int div=x;
  while(div>=1){
    sum += div % 10;
    div/=10;
  }
  return sum;
}
*/

int sumDigits_for(int x){
  int sum=0;
  for (int div=x; div>1; div/=10){
    sum += div % 10;
  }
  return sum;
}

int main() {
  int n;
  while (std::cin >> n) {
    //std::cout << sumDigits(n) << std::endl;
    std::cout << sumDigits_for(n) << std::endl;
  }
}