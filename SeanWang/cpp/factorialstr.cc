#include <iostream>
using namespace std;

int times(char result[], int n, int len, int max){
  int carry = 0;
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

void factorial(int n, char result[], int max)
{
  int len = 0;
  result[0] = 1;
  len++;
  for (int i = 2; i<= n; i++) {
    len = times(result, i, len, max);
  }
  for (int i = 0; i < len / 2; i++)
  {
    char ch = result[i] + '0';
    result[i] = result[len - i - 1] + '0';
    result[len - i - 1] = ch;
  }
  if (len%2 == 1) result[len/2] += '0';
  result[len] = '\0';
  cout << result << endl;
}

int main()
{
  int n;
  const int max = 1000;
  char result[max];
  while (cin >> n)
  {
    factorial(n, result, max);
  }
}
