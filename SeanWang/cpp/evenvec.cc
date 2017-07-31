#include <iostream>
#include <vector>
using namespace std;

int collectEven(vector<int>& arr, vector<int>& out)
{
  int cnt = 0;
  for (int i = 0; i < arr.size(); i++)
  {
    if (arr[i] % 2 == 0)
    {
      out.push_back(arr[i]);
      cnt++;
    }
  }
  return cnt;
}

int main() {
  int n;
  vector<int> v;
  int arr[100];
  int len = 0;
  
  while (cin >> n) {
    v.push_back(n);
    arr[len++] = n;
  }
  
  vector<int> out;
  collect1(v, out);
  
  int aout[100];
  int olen = 0;
  collect2(arr, len, aout, olen, 100)
  
  
  
}
int main0()
{
  vector<int> arr({3, 4, 1, 2, 53, 3, 34, 5});
  vector <int> out;
  int n = collectEven(arr, out);
  
  cout << "vec: " << n << ": ";
  for (int i = 0; i < out.size(); i++)
  {
    cout << out[i] << ", ";
  }
  
  vector<int> arr2({3, 4, 1, 2, 53, 3, 34, 5});
  collectEven(arr, out);
  
  cout << "vec: " << n << ": ";
  for (int i = 0, n = out.size(); i < n; i++)
  {
    cout << out[i] << ", ";
  }
  
}