#include <iostream>
using namespace std;

void prRect(int m, int n)
{
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}

int main()
{
  int aa, bb;
  cin >> aa >> bb;
  prRect(aa, bb);
}