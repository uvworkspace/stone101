#include <iostream>
#include <string>
using namespace std;

void padnums(int w)
{
  string num;
  while (cin >> num)
  {
    for (int i = 1; i <= w - num.length(); i++)
    {
      cout << " ";
    }
    cout << num;
  }
}

void avg(int nsub, int w)
{
  int num;
  int sum[nsub];
  int total = 0;
  while (cin >> num)
  {
    int i = 0;
    sum[i] = num;
    i++;
  }
  int len = sizeof(sum) / sizeof(int);
  for (int i = 0; i < len; i++)
  {
    total += sum[i];
  }
  cout << total / len;
}

int main() {
  int nsub, width;
  cin >> nsub >> width;
  avg(nsub, width);
}