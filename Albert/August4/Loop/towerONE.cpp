#include <iostream>
using namespace std;

void towerOne(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << "1";
    }
    cout << endl;
  }
}

int main()
{
  int QQ;
  cin >> QQ;
  towerOne(QQ);
}