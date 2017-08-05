#include <iostream>
using namespace std;

void num(int n)
{
  int aa = 2;
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    cout << sum << " "; 
    sum = sum + aa;
    aa = aa + 2;
  }
}

int main()
{
  int QQ;
  cin >> QQ;
  num(QQ);
}