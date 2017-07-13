#include <iostream>
#include <map>
#include <algorithm> 
using namespace std;

int main ()
{
  std::map<char,int> cnts;

  cnts['a']=10;
  cnts['x']=30;
  cout << "a: " << cnts['a'] << endl;
  cout << "x: " << cnts['x'] << endl;
  cout << "b: " << cnts['b'] << endl;
  cnts['c']++;
  cout << "c: " << cnts['c'] << endl;
  
  vector<int> arr2 = {3, 1, 4, 1, 6};
  for (int n : arr2) {
    cout << n << ",";
  }
  cout << endl;
  sort(arr2.begin(), arr2.end());
  for (int n : arr2) {
    cout << n << ",";
  }
  cout << endl;
}