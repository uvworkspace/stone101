#include <iostream>
#include <map>
using namespace std;

long fib(int n, map<int, long>& cache)
{
  if (n <= 2)
  {
    return 1;
  }
  if (cache[n])
  {
    return cache[n];
  }

  long x = fib(n - 1, cache) + fib(n - 2, cache);
  cache[n] = x;
  return x;
}

int main()
{
  int n;
  map <int, long> cache;
  while (cin >> n)
  {
    cout << fib(n, cache);
    cout << endl;
  }
}



