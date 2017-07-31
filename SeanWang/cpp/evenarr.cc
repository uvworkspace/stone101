#include <iostream>
#include <vector>
using namespace std;

int collectEven(int arr[], int len, int out[], int label, int max)
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



int main()
{
  int label = 0;
  int max = 100;
  int arr[] = {4, 4, 1, 15, 12 ,17 ,66, 23};
  int len = sizeof(arr) / sizeof(arr[0]);
  int out[max];
  label = collectEven(arr, len, out, label, max);
  
  int arr2[] = {5, 1, 14, 19, 22, 60};
  int len2 = sizeof(arr2) / sizeof(arr2[0]);
  label = collectEven(arr2, len2, out, label, max);
  
  for (int i = 0; i < label; i++)
  {
    cout << out[i] << ", ";
  }
}