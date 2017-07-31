#include <iostream>
#include <vector>
using namespace std;

void times(vector <int>& result, int n){
  long carry = 0;
  for (int j = 0; j < result.size(); j++)
  {
    carry += result[j] * n;
    result[j] = carry % 10;
    carry /= 10;
  }
  while (carry > 0) 
  {
    result.push_back(carry % 10);
    carry /= 10;
  }
}

void factorial(int n)
{
  vector <int> result;
  result.push_back(1);
  for (int i = 2; i<= n; i++) {
    times(result, i);
  }
  
  for (int k = result.size() - 1; k >= 0; k--)
  {
    cout << result[k];
  }
  cout << endl;
}

int main()
{
  int n;
  while (cin >> n)
  {
    factorial(n);
  }
}
