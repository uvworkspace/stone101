#include <iostream>
using namespace std;

int add(int a, int b)
{
  return a + b;
}

int main()
{
  int popo = 51, toto = 42;
  int x = add(popo,toto);
  cout << x << endl;
}