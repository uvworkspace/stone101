#include <iostream>
#include <vector>
using namespace std;

int main ()
{
  vector<int> arr;

  cout << "sz: " << arr.size() << endl;
  arr.push_back(123);
  cout << "arr[0]: " << arr[0] << " sz: " << arr.size() << endl;
  
  vector<int> arr2 = {3, 1, 4, 1, 6};

  for (int n : arr2) {
    cout << n << endl;
  }
}