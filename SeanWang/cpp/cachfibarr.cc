# include <iostream>
using namespace std; 

long fib(int n, long arr[], int max)
{
  if (n >= max)
    return 0;
  if (n <= 2)
  {
    return 1;
  }
  if (arr[n])
  {
    return arr[n];
  }
  long x = fib(n - 1, arr, max) + fib(n - 2, arr, max);
  arr[n] = x;
  return x;
}

int main()
{
  const int max = 100;
  long arr[max] = {};
  
  for (int i = 1; i < 60; i++)
  {
    cout << fib(i, arr, max) << " ";
  }
}