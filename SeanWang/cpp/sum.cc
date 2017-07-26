#include<iostream>
using namespace std;
int sumDigits(int n) 
{
  int sum = 0;
  for (int div = n; div > 0; div = div / 10) 
  {
    sum += div % 10;
  }
  return sum;
}

int sumd(int n)
{
  int div = n;
  int sum = 0;
  while (div > 0)
  {
    sum += div % 10;
    div /= 10;
  }
  return sum;
}

int main() {
  int n;
  while (std::cin >> n) {
    std::cout << sumDigits(n) << std::endl;
    std::cout << sumd(n) << std::endl;
  }
}