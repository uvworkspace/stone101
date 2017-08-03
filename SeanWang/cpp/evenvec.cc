#include <iostream>
#include <vector>
using namespace std;

int collectEven1(vector<int>& arr, vector<int>& out)
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

int collectEven2(int arr[], int len, int out[], int label, int max)
{
  for (int i = 0; i < len and i < max; i++)
  {
    if (arr[i] % 2 == 0)
    {
      
      out[label] = arr[i];
      label++;
    }
  }
  return label;
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
  collectEven1(v, out);
  
  int aout[100];
  int olen = 0;
  collectEven2(arr, len, aout, olen, 100);
  
  int x = collectEven1(arr, out);
  
  cout << "vec: " << x << ": ";
  for (int i = 0; i < out.size(); i++)
  {
    cout << out[i] << ", ";
  }
  
  olen = collectEven2(arr, len, aout, olen, 100);
  
  for (int i = 0; i < olen; i++)
  {
    cout << out[i] << ", ";
  }
}

/*int main0()
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
}*/