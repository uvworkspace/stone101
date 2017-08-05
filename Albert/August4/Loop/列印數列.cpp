#include <iostream>
using namespace std;

void ascending(int n)
{
  for (int a = 0; a <= n; a++)
  {
    cout << a << " ";
  }
  cout << endl;
}

void evenN(int x)
{
  for (int b = 0; b <= (x - 1) * 2; b += 2)
  {
    cout << b << " ";
  }
  cout << endl;
}

void descending(int aa)
{
  for (int c = aa; c >= 0; c--)
  {
    cout << c << " ";
  }
  cout << endl;
}

void minusFive(int bb)
{
  int hard = 100 - ((bb - 1) * 5);
  for (int d = 100; d >= hard; d -= 5)
  {
    cout << d << " ";
  }
  cout << endl;
}

int main()
{
  int a, e, d, m;
  cin >> a >> e >> d >> m;
  ascending(a);
  evenN(e);
  descending(d);
  minusFive(m);
}