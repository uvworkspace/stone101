#include <iostream>
using namespace std;

int times(int result[], int n, int len, int max){
  long carry = 0;
  for (int j = 0; j < len; j++)
  {
    carry += result[j] * n;
    result[j] = carry % 10;
    carry /= 10;
  }
  while (carry > 0 and len < max) 
  {
    result[len] = (carry % 10);
    carry /= 10;
    len++;
  }
  return len;
}

void factorial(int n, int result[], int max)
{
  int len = 0;
  result[0] = 1;
  len++;
  for (int i = 2; i<= n; i++) {
    len = times(result, i, len, max);
    }
  for (int k = len - 1; k >= 0; k--)
  {
    cout << result[k];
  }
  cout << endl;
}

int main()
{
  int n;
  const int max = 1000;
  int result[max];
  while (cin >> n)
  {
    factorial(n, result, max);
  }
}
