#include <iostream>
using namespace std;

void sumN(int n)
{
  int sum = 0;
  for (int a = 0; a <= n; a++)
  {
    sum = sum + a;
  }
  cout << sum << endl;
}

void sumEven(int x)
{
  int aa = 0;
  for (int b = 2; b <= x * 2; b += 2)
  {
    aa = aa + b;
  }
  cout << aa << endl;
}

void multiple(int n)
{
  int bb = 1;
  for (int c = 1; c <= n; c++)
  {
    bb = bb * c;
  }
  cout << bb << endl;
}

int main()
{
  int sum, sumE, mul;
  cin >> sum >> sumE >> mul;
  sumN(sum);
  sumEven(sumE);
  multiple(mul);
}