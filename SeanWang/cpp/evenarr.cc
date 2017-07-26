#include <iostream>
#include <vector>
using namespace std;

int collectEven(int arr[], int out[], int label)
{
  int len = sizeof(arr) / sizeof(int);
  for (int i = 0; i < len; i++)
  {
    if (arr[i] % 2 == 0)
    {
      out[i + label] = arr[i];
      label++;
    }
  }
  return label;
}


int main()
{
  int arr[] = {4, 4, 1, 15, 12 ,17 ,66, 23};
  int out[100];
  collectEven(arr[], out[]);
  
  int arr2[] = {5, 1, 14, 19, 22, 60};
  collectEven(int );
}