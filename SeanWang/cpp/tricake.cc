#include <iostream>
using namespace std;
void prrow(int r) 
{
  cout << "*";
  for (int i = 2; i < r; ++i)
  {
    cout << "-";
  }
  cout << "*\n";
}

int printCake(int n)
{
  cout << "*\n";
  if (n == 1) 
  {
    return 1;
  }
  for (int i = 2; i < n; ++i) 
  {
    prrow(i);
  }
  for (int i = 1; i <= n; ++i)
  {
    cout << "*";
  }
  cout << "\n";
}


int main() 
{
  int n;
  while (std::cin >> n) 
  {
    printCake(n);
  }
}